#include "directory_tree.h"
#include <iostream>
#include <filesystem>

// Alias for filesystem namespace
namespace fs = std::filesystem;

void print_directory_tree(const std::string &path, int depth) {
    for (const auto &p : fs::directory_iterator(path)) {
        std::cout << std::string(depth * 2, ' ') << (p.is_directory() ? "[DIR] " : "[FILE] ") << p.path().filename().string() << std::endl;

        if (p.is_directory()) {
            print_directory_tree(p.path().string(), depth + 1);
        }
    }
}
