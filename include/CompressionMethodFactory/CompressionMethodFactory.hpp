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

private:
    static std::map<std::string, TCreateMethod> s_methods;
};

#endif //TEST_SELF_FACTORY_ICOMPRESSIONMETHOD_HPP
