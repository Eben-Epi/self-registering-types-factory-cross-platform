/*!

\file ZipCompression.cpp
\brief Enter your brief here //TODO
\author Eben
\version 0.1

*/

#include <CompressionMethods/GZIPCompression.hpp>
#include <iostream>

bool GZIPCompression::s_registered =
        CompressionMethodFactory::Register(GZIPCompression::GetFactoryName(),
                                           GZIPCompression::CreateMethod);

std::unique_ptr<ICompressionMethod> GZIPCompression::CreateMethod() {
    return std::make_unique<GZIPCompression>();
}

std::string GZIPCompression::GetFactoryName() {
    return "GZIP";
}

void GZIPCompression::Compress() {
    std::cout << "WOW, je GZIP !... hein?" << std::endl;
}