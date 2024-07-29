#include <iostream>
#include "directory_tree.h"
using namespace std;

int main(){
    string path;
    cout << "Please enter a directory path:" << endl;
    getline(cin, path);

    if(path.empty()){
        cerr << "Path cannot be empty." << endl;
        return 1;
    }
     try {
        print_directory_tree(path, 0);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}