/*!

\file CompressionMethodFactory.cpp
\brief Enter your brief here //TODO
\author Eben
\version 0.1

*/

#include <CompressionMethodFactory/CompressionMethodFactory.hpp>

std::map<std::string, CompressionMethodFactory::TCreateMethod> CompressionMethodFactory::s_methods;

bool CompressionMethodFactory::Register(const std::string name,
                                        TCreateMethod funcCreate)
{
    if (auto it = s_methods.find(name); it == s_methods.end())
    { // C++17 init-if ^^
        s_methods[name] = funcCreate;
        return true;
    }
    return false;
}

std::unique_ptr<ICompressionMethod> CompressionMethodFactory::Create(const std::string& name)
{
    if (auto it = s_methods.find(name); it != s_methods.end())
        return it->second(); // call the createFunc

    return nullptr;
}