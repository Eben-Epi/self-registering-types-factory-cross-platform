/*!

\file ZipCompression.cpp
\brief Enter your brief here //TODO
\author Eben
\version 0.1

*/

#include <CompressionMethods/BZCompression.hpp>
#include <iostream>
#include <QDebug>

std::unique_ptr<ICompressionMethod> BZCompression::CreateMethod() {
    return std::make_unique<BZCompression>();
}

KNOWN_COMPRESSION_TYPES BZCompression::GetFactoryName() {
    return BZ;
}

void BZCompression::Compress() {
    qDebug("WOW, je BZ !... hein?");
}
