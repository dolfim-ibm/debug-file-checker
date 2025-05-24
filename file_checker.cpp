#include <filesystem>
#include <string>
#include <iostream>

#ifdef _WIN32
#include <locale>
#include <codecvt>
#endif


bool file_exists(const std::string& filename) {
    std::cout << "Checking: " << filename << std::endl;
    return std::filesystem::exists(filename);
}

bool file_exists_fix(const std::string& filename) {
    std::cout << "Checking (with fix): " << filename << std::endl;
#ifdef _WIN32
    std::cout << "Using WIN32 fix!" << std::endl;
    // Convert UTF-8 string to UTF-16 wstring
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring wide_filename = converter.from_bytes(filename);
    return std::filesystem::exists(std::filesystem::path(wide_filename));
#else
    return std::filesystem::exists(std::filesystem::path(filename));
#endif
}
