/*!

\file CompressionMethodFactory.cpp
\brief Enter your brief here //TODO
\author Eben
\version 0.1

*/

#include <CompressionMethodFactory/CompressionMethodFactory.hpp>

std::map<KNOWN_COMPRESSION_TYPES, CompressionMethodFactory::TCreateMethod>& CompressionMethodFactory::s_methods() {
    static std::map<KNOWN_COMPRESSION_TYPES, CompressionMethodFactory::TCreateMethod> my_static_obj_;
    return my_static_obj_;
};

bool CompressionMethodFactory::Register(KNOWN_COMPRESSION_TYPES name,
                                        TCreateMethod funcCreate)
{
    if (auto it = s_methods().find(name); it == s_methods().end())
    { // C++17 init-if ^^
        s_methods()[name] = funcCreate;
        return true;
    }
    return false;
}

std::unique_ptr<ICompressionMethod> CompressionMethodFactory::Create(KNOWN_COMPRESSION_TYPES name)
{
    if (auto it = s_methods().find(name); it != s_methods().end())
        return it->second(); // call the createFunc

    return nullptr;
}

//std::map<std::string, CompressionMethodFactory::TCreateMethod> &CompressionMethodFactory::GetMap()
//{
//    static std::map<std::string, CompressionMethodFactory::TCreateMethod> s_methods;
//    return s_methods;
//}
