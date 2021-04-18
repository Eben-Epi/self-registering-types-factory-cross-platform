/*!

\file ZipCompression.cpp
\brief Enter your brief here //TODO
\author Eben
\version 0.1

*/

#include <CompressionMethods/ZipCompression.hpp>
#include <iostream>
#include <QDebug>

std::unique_ptr<ICompressionMethod> ZipCompression::CreateMethod() {
    return std::make_unique<ZipCompression>();
}

KNOWN_COMPRESSION_TYPES ZipCompression::GetFactoryName() {
    return ZIP;
}

void ZipCompression::Compress() {
    qDebug("WOW, je ZIPPE");
}
