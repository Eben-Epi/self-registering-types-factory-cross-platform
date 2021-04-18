/*!

\file ZipCompression.cpp
\brief Enter your brief here //TODO
\author Eben
\version 0.1

*/

#include <CompressionMethods/GZIPCompression.hpp>
#include <iostream>

std::unique_ptr<ICompressionMethod> GZIPCompression::CreateMethod() {
    return std::make_unique<GZIPCompression>();
}

KNOWN_COMPRESSION_TYPES GZIPCompression::GetFactoryName() {
    return GZIP;
}

void GZIPCompression::Compress() {
    std::cout << "WOW, je GZIP !... hein?" << std::endl;
}