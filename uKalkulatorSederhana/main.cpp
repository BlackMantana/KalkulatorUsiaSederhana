#include <iostream>
#include <format>
#include <chrono>

void log(int result) {
    std::cout << "Umur anda sekarang adalah: " << result << " tahun " << std::endl;
}

int main() {
    auto date = std::chrono::system_clock::now();
    std::string year = std::format("{:%Y}", date);

    int tahun_lahir = {};
    int tahun_sekarang = std::stoi(year);

    std::cout << "Masukan tahun kelahiran anda: " << std::endl;
    std::cin >> tahun_lahir;
    int usia = tahun_sekarang - tahun_lahir;
    log(usia);

    if (usia <= 20) {
        std::cout << "Anda masih anak-anak" << std::endl;
    }else if (usia <= 45) {
        std::cout << "Anda sudah dewasa" << std::endl;
    }else if (usia < 75) {
        std::cout << "Anda sudah tua" << std::endl;
    }else if (usia > 75) {
        std::cout << "Anda sudah sepuh" << std::endl;
    }
}
