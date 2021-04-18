/*!

\file BZCompression.hpp
\brief Enter your brief here //TODO
\author Eben
\version 0.1

*/

#include "CompressionMethodFactory/CompressionMethodFactory.hpp"

#ifndef TEST_SELF_FACTORY_ZIPCOMPRESSION_HPP
#define TEST_SELF_FACTORY_ZIPCOMPRESSION_HPP

class BZCompression : public ICompressionMethod, public RegisteredInFactory<BZCompression>
{
public:
    virtual void Compress() override;

    static std::unique_ptr<ICompressionMethod> CreateMethod();
    static KNOWN_COMPRESSION_TYPES GetFactoryName();

private:
    static bool s_registered;
};

#endif //TEST_SELF_FACTORY_ZIPCOMPRESSION_HPP
