#include <iostream>
#include <string>

// Define a structure with an int followed by a bool
struct DataPacket {
    int grade = 55;            // 4 bytes
    bool passed = true;        // 1 byte
};

int main() {
    // Create an instance of our structure
    DataPacket packet;

    std::cout << "\n---------- HARDWARE REPORT (STRUCT) ----------" << std::endl;

    // Print the addresses of the members within the structure
    std::cout << "Address of grade:  " << &packet.grade << std::endl;
    std::cout << "Address of passed: " << (void*)&packet.passed << std::endl;

    // We can also check the total size of the struct
    std::cout << "Total size of DataPacket struct: " << sizeof(DataPacket) << " bytes" << std::endl;

    return 0;
}
