#include <filesystem>
#include <string>

bool file_exists(const std::string& filename) {
    return std::filesystem::exists(filename);
}

bool file_exists_fix(const std::string& filename) {
    return std::filesystem::exists(filename);
}
