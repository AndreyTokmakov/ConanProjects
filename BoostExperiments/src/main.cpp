/**============================================================================
Name        : main.cpp
Created on  : 26.08.2024
Author      : Andrei Tokmakov
Version     : 1.0
Copyright   : Your copyright notice
Description : Boost experiments
============================================================================**/

#include <iostream>
#include <string_view>
#include <vector>
#include <array>
#include <list>
#include <map>
#include <iomanip>
#include <fstream>
#include <charconv>
#include <variant>
#include <format>
#include <optional>

#include <boost/variant2/variant.hpp>
#include <boost/version.hpp>
#include <boost/asio.hpp>
#include <boost/any.hpp>
#include <boost/bind.hpp>
#include <boost/thread.hpp>
#include <boost/uuid/detail/md5.hpp>
#include <boost/algorithm/hex.hpp>
#include <boost/asio/ssl.hpp>
#include <boost/tokenizer.hpp>
#include <boost/noncopyable.hpp>
#include <boost/url.hpp>
#include <boost/utility/string_view.hpp>
#include <boost/bimap/bimap.hpp>
#include <boost/container/detail/addressof.hpp>
#include <boost/container/flat_map.hpp>
#include <boost/numeric/ublas/matrix_sparse.hpp>

#include "openssl/aes.h"
#include "openssl/asn1.h"
// #include "openssl/asn1_mac.h"
#include "openssl/asn1err.h"
#include "openssl/asn1t.h"
#include "openssl/async.h"
#include "openssl/asyncerr.h"
#include "openssl/bio.h"
#include "openssl/bioerr.h"
#include "openssl/blowfish.h"


namespace Utilities
{
    void PrintVersion()
    {
        std::cout << "Using Boost " << BOOST_VERSION / 100000     << "."  // major version
                  << BOOST_VERSION / 100 % 1000 << "."  // minor version
                  << BOOST_VERSION % 100                // patch level
                  << std::endl;


        std::cout << "\nOpenSSL" << std::endl;
        std::cout << "\tNumber     : " << std::hex << OpenSSL_version_num() << std::endl;
        std::cout << "\tversion    : " << OpenSSL_version(OPENSSL_VERSION) << std::endl;
        std::cout << "\tBuild On   : " << OpenSSL_version(OPENSSL_BUILT_ON) << std::endl;
        std::cout << "\tPlatfprm   : " << OpenSSL_version(OPENSSL_PLATFORM) << std::endl;
        std::cout << "\tCPP Flags  : " << OpenSSL_version(OPENSSL_CFLAGS) << std::endl;
        std::cout << "\tDir        : " << OpenSSL_version(OPENSSL_DIR) << std::endl;
        std::cout << "\tEngine dir : " << OpenSSL_version(OPENSSL_ENGINES_DIR) << std::endl;

    }

    const static int dummy = []() {
        PrintVersion();
        return 0;
    }();
}


int main([[maybe_unused]] int argc,
         [[maybe_unused]] char** argv)
{
    const std::vector<std::string_view> args(argv + 1, argv + argc);
    std::cout << "Boost experiments app" << std::endl;


    return EXIT_SUCCESS;
}
