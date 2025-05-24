#include <filesystem>
#include <string>

#ifdef _WIN32
#include <locale>
#include <codecvt>
#endif


bool file_exists(const std::string& filename) {
    return std::filesystem::exists(filename);
}

bool file_exists_fix(const std::string& filename) {
#ifdef _WIN32
    // Convert UTF-8 string to UTF-16 wstring
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring wide_filename = converter.from_bytes(filename);
    return std::filesystem::exists(std::filesystem::path(wide_filename));
#else
    return std::filesystem::exists(std::filesystem::path(filename));
#endif
}
