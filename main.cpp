#include <iostream>
#include "CompressionMethodFactory/CompressionMethodFactory.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto zip = CompressionMethodFactory::Create(ZIP);
    auto bz = CompressionMethodFactory::Create(BZ);
    auto gzip = CompressionMethodFactory::Create(GZIP);

    zip->Compress();
    bz->Compress();
    gzip->Compress();
    return 0;
}
