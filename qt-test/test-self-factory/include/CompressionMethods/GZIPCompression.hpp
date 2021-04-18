/*!

\file GZIPCompression.hpp
\brief Enter your brief here //TODO
\author Eben
\version 0.1

*/

#ifndef TEST_SELF_FACTORY_GZIPCOMPRESSION_HPP
#define TEST_SELF_FACTORY_GZIPCOMPRESSION_HPP

#include "CompressionMethodFactory/CompressionMethodFactory.hpp"

class GZIPCompression : public ICompressionMethod
{
public:
    virtual void Compress() override;

    static std::unique_ptr<ICompressionMethod> CreateMethod();
    static std::string GetFactoryName();

private:
    static bool s_registered;
};

#endif //TEST_SELF_FACTORY_GZIPCOMPRESSION_HPP
