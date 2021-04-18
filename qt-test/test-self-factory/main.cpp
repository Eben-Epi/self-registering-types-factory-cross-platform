#include "mainwindow.h"
#include <iostream>
#include "CompressionMethodFactory/CompressionMethodFactory.hpp"
#include <QApplication>

int main(int argc, char** argv) {
    std::cout << "Hello, World!" << std::endl;

    auto zip = CompressionMethodFactory::Create(ZIP);
    auto bz = CompressionMethodFactory::Create(BZ);
    auto gzip = CompressionMethodFactory::Create(GZIP);

    zip->Compress();
    bz->Compress();
    gzip->Compress();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    return 0;
}
