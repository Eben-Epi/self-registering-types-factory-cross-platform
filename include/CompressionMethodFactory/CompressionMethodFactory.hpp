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

    static bool Register(const std::string name, TCreateMethod funcCreate);

    static std::unique_ptr<ICompressionMethod> Create(const std::string& name);

//    static std::map<std::string, CompressionMethodFactory::TCreateMethod>& GetMap();
private:
    static std::map<std::string, TCreateMethod>& s_methods();
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
