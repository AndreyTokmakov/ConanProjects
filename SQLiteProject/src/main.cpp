/**============================================================================
Name        : main.cpp
Created on  : 
Author      : Andrei Tokmakov
Version     : 1.0
Copyright   : Your copyright notice
Description :
============================================================================**/

#include <iostream>
#include <string_view>
#include <vector>

#include <sqlite3.h>


int main([[maybe_unused]] int argc,
         [[maybe_unused]] char** argv)
{
    const std::vector<std::string_view> args(argv + 1, argv + argc);
    
    std::cout << "SQLite3 version " << sqlite3_libversion() << std::endl;

    // sqlite3 *dbb = NULL;
    // sqlite3_open("esrerer", &dbb);


    return EXIT_SUCCESS;
}