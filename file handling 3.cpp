#include<iostream>
#include<fstream>
using namespace std;
 int main()
 { ifstream inputfile("test.text");
 if (inputfile.is_open())
 { string line;
 int countline=0;
 while( getline(inputfile,line))
 {
 countline ++;
} 
cout << " number of lines in the file " << countline << endl;
 inputfile.close();
 }
 else 
 cout << " error in opening file" << endl;
 }