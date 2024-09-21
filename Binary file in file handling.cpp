#include <iostream>
#include <fstream>
int main() {
 // Data to be written to the file
 int numbers[] = {10, 20, 30, 40, 50};
 // Writing binary data to a file
 std::ofstream outFile("binaryfile.bin", std::ios::binary);
 if (outFile.is_open()) {
 outFile.write(reinterpret_cast<char*>(numbers), 
sizeof(numbers));
 outFile.close();
 std::cout << "Binary data written to the file." << 
std::endl;
 } else {
 std::cout << "Unable to open file for writing." << 
std::endl;
 }
 // Reading binary data from the file
 int readNumbers[5];
 std::ifstream inFile("binaryfile.bin", std::ios::binary);
 if (inFile.is_open()) {
 inFile.read(reinterpret_cast<char*>(readNumbers), 
sizeof(readNumbers));
 inFile.close();
 std::cout << "Binary data read from the file:\n";
 for (int i = 0; i < 5; ++i) {
 std::cout << readNumbers[i] << " ";
 }
 std::cout << std::endl;
 } else {
 std::cout << "Unable to open file for reading." << 
std::endl;
 }
 return 0;
}
    