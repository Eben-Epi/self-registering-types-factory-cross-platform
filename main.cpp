#include <iostream>
#include "CompressionMethodFactory/CompressionMethodFactory.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto zip = CompressionMethodFactory::Create("ZIP");
    auto bz = CompressionMethodFactory::Create("BZ");

    zip->Compress();
    bz->Compress();
    return 0;
}
