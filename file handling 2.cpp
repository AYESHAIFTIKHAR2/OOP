#include <iostream>
#include <fstream>
using namespace std;

int main()
{ ifstream inputfile("test.text"); // ifstream for reading the existing file
if(inputfile.is_open())
{ string line;
while(getline(inputfile,line))
cout << line << endl;
inputfile.close();
cout << " file is succesfully readed " << endl ;
}
else
{ cout << " file error " ;
}
}
