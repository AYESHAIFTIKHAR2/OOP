#include<iostream>
#include<fstream>
using namespace std;

int main()
{ ifstream inputfile("test.text");
ofstream inputfile2("copy_test.text");

if ( inputfile.is_open()&& inputfile2.is_open())
{ string line ;
while (getline(inputfile,line))
inputfile2 << line << endl;
inputfile.close();
inputfile2.close();
cout << " file is copied " << endl ;
}
else
cout << " error " << endl;
}
