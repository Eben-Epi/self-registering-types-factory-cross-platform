/*!

\file ZipCompression.cpp
\brief Enter your brief here //TODO
\author Eben
\version 0.1

*/

#include <CompressionMethods/BZCompression.hpp>
#include <iostream>
#include <QDebug>

bool BZCompression::s_registered =
        CompressionMethodFactory::Register(BZCompression::GetFactoryName(),
                                           BZCompression::CreateMethod);

std::unique_ptr<ICompressionMethod> BZCompression::CreateMethod() {
    return std::make_unique<BZCompression>();
}

std::string BZCompression::GetFactoryName() {
    return "BZ";
}

void BZCompression::Compress() {
    qDebug("WOW, je BZ !... hein?");
}
