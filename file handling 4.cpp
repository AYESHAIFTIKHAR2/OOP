#include<iostream>
#include<fstream>
#include <sstream>
using namespace std;
int main ()
{ ifstream inputfile("test.text");

if(inputfile.is_open())
{ string line;
int countword=0;

while(getline(inputfile,line))
{ stringstream ss(line) ;
string word;
while (ss>>word)
{ countword++;
}
}
cout << " number of words in the lines are " << countword << endl;
}
else
 cout << " error ";
}
