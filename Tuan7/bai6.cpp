#include <iostream>

int main(int argc, const char * argv[]) {
    if (argc < 4) {
        std::cerr << "Usage: " << argv[0] << " rows columns mines" << std::endl;
        return 1;
    }

    int rows = std::atoi(argv[1]);
    int columns = std::atoi(argv[2]);
    int mines = std::atoi(argv[3]);

    std::cout << "Rows: " << rows << ", Columns: " << columns << ", Mines: " << mines << std::endl;

    return 0;
}
