/*!

\file ZipCompression.cpp
\brief Enter your brief here //TODO
\author Eben
\version 0.1

*/

#include <CompressionMethods/ZipCompression.hpp>
#include <iostream>

bool ZipCompression::s_registered =
        CompressionMethodFactory::Register(ZipCompression::GetFactoryName(),
                                           ZipCompression::CreateMethod);

std::unique_ptr<ICompressionMethod> ZipCompression::CreateMethod() {
    return std::make_unique<ZipCompression>();
}

std::string ZipCompression::GetFactoryName() {
    return "ZIP";
}

void ZipCompression::Compress() {
    std::cout << "WOW, je ZIPPE" << std::endl;
}
