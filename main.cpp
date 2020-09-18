#include <iostream>
#include "Sales_item.h"
#include <windows.h> 
int main()
{
Sales_item book;
std::cout << "enter bookname number and price" << std::endl;
std::cin >> book;
std::cout << book << std::endl;
std::cout << book.isbn() << std::endl;
system("pause");
    return 0;
    //jjj
}