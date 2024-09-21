#include<iostream>
#include<fstream>
using namespace std;

int main()
{ ofstream inputfile("test.text");
if(inputfile.is_open())
{ inputfile << " hi! myself ayesha"<<endl;
inputfile<<" i am currently a BSIT student at Baba Guru Nanak University." ;
inputfile.close();
cout << " file is successfully created" << endl;
}
else 
{ cout << " something wrong with the file." << endl;
}
}
