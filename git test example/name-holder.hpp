#ifndef NAME_HOLDER_HPP
#define NAME_HOLDER_HPP

#include <string>
#include <array>

void AddName(std::string name);

template<typename type,size_t n>
std::array<type,n> CurrentNames();


#endif // !NAME_HOLDER_HPP