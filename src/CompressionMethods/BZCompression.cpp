/*!

\file ZipCompression.cpp
\brief Enter your brief here //TODO
\author Eben
\version 0.1

*/

#include <CompressionMethods/BZCompression.hpp>
#include <iostream>

std::unique_ptr<ICompressionMethod> BZCompression::CreateMethod() {
    return std::make_unique<BZCompression>();
}

std::string BZCompression::GetFactoryName() {
    return "BZ";
}

void BZCompression::Compress() {
    std::cout << "WOW, je BZ !... hein?" << std::endl;
}