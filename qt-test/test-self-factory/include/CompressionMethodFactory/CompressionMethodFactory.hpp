/*!

\file ICompressionMethod.hpp
\brief Enter your brief here //TODO
\author Eben
\version 0.1

*/

#ifndef TEST_SELF_FACTORY_ICOMPRESSIONMETHOD_HPP
#define TEST_SELF_FACTORY_ICOMPRESSIONMETHOD_HPP

#include <map>
#include <memory>
#include <string>

enum KNOWN_COMPRESSION_TYPES {
    BZ,
    GZIP,
    ZIP
};

class ICompressionMethod
{
public:
    ICompressionMethod() = default;
    virtual ~ICompressionMethod() = default;

    virtual void Compress() = 0;
};

class CompressionMethodFactory
{
public:
    using TCreateMethod = std::unique_ptr<ICompressionMethod>(*)();

public:
    CompressionMethodFactory() = delete;

    static bool Register(KNOWN_COMPRESSION_TYPES name, TCreateMethod funcCreate);

    static std::unique_ptr<ICompressionMethod> Create(KNOWN_COMPRESSION_TYPES name);

private:
    static std::map<KNOWN_COMPRESSION_TYPES, TCreateMethod>& s_methods();
};

template <typename T>
class RegisteredInFactory
{
protected:
    RegisteredInFactory() { s_bRegistered; }
    static bool s_bRegistered;
};

template <typename T>
bool RegisteredInFactory<T>::s_bRegistered =
        CompressionMethodFactory::Register(T::GetFactoryName(), T::CreateMethod);

#endif //TEST_SELF_FACTORY_ICOMPRESSIONMETHOD_HPP
