/*!

\file ZipCompression.hpp
\brief Enter your brief here //TODO
\author Eben
\version 0.1

*/

#include "CompressionMethodFactory/CompressionMethodFactory.hpp"

#ifndef TEST_SELF_FACTORY_ZIPCOMPRESSION_HPP
#define TEST_SELF_FACTORY_ZIPCOMPRESSION_HPP

class ZipCompression : public ICompressionMethod, public RegisteredInFactory<ZipCompression>
{
public:
    virtual void Compress() override;

    static std::unique_ptr<ICompressionMethod> CreateMethod();
    static std::string GetFactoryName();

private:
    static bool s_registered;
};

#endif //TEST_SELF_FACTORY_ZIPCOMPRESSION_HPP
