#include <vector>
#include <cmath>
#include "pbPlots.hpp"
#include "supportLib.hpp"

class Swerve {
public:
    float x, y, theta;
    std::vector<float> vx_roda;
    std::vector<float> vy_roda;
    std::vector<float> v_resultant;

    Swerve() : x(0), y(5), theta(0) {}

    void updatePose(float vx, float vy, float omega, float deltaTime) {
        x += vx * deltaTime;
        y += vy * deltaTime;
        theta += omega * deltaTime;
    }

    void velocityCommand(float deltaTime) {
        // Asumsikan rx dan ry sudah didefinisikan
        float rx = 0.26363;
        float ry = 0.26363;

        // Persamaan dari soal untuk menghitung vx dan vy
        float vx = 4 * cos(theta) - 48 * cos(theta) * sin(theta) * sin(theta);
        float vy = 4 * sin(theta) + 20 * sin(2 * theta) - 3 * sin(3 * theta);
        float omega = 0; // Diketahui dari soal

        // Hitung kecepatan roda dengan persamaan matrix yang diberikan
        // Anda perlu mengisi vx_roda dan vy_roda berdasarkan vx, vy dan omega
        // Ini harus dilakukan untuk setiap roda

        updatePose(vx, vy, omega, deltaTime);

        // Setelah itu, hitung kecepatan resultant untuk setiap roda
        for (int i = 0; i < 4; ++i) {
            float vn = sqrt(vx_roda[i] * vx_roda[i] + vy_roda[i] * vy_roda[i]);
            v_resultant.push_back(vn);
        }
    }
};

int main() {
    Swerve swerve;
    std::vector<double> x_values, y_values, v1_values, v2_values, v3_values, v4_values;

    // Simulasi untuk 6 detik dengan increment waktu 0.01 detik
    for(float t = 0; t <= 6; t += 0.01) {
        swerve.velocityCommand(0.01);
        x_values.push_back(swerve.x);
        y_values.push_back(swerve.y);
        // Misalnya v1_values.push_back(swerve.v_resultant[0]); dan seterusnya untuk v2, v3, dan v4
    }

    // Buat dan simpan grafik menggunakan pbPlots
    // Contoh untuk grafik x terhadap waktu
    RGBABitmapImageReference *imageReference = CreateRGBABitmapImageReference();
    DrawScatterPlot(imageReference, 600, 400, &x_values, &y_values);

    std::vector<double> *pngdata = ConvertToPNG(imageReference->image);
    WriteToFile(pngdata, "path_to_save/x_vs_time.png");
    DeleteImage(imageReference->image);

    // Anda harus mengulangi proses ini untuk v1, v2, v3, dan v4 terhadap waktu
    // Dan jangan lupa untuk membebaskan alokasi memori dengan FreeAllocations()

    return 0;
}