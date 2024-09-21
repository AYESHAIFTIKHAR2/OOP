#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void displayfileContent(const std::string & filename)
{
	ifstream file(filename);
	
	string line;
	if(file.is_open()){
		cout<<"file content"<<endl;
		while(getline(file, line)){
		cout<<line<<endl;
	}
	file.close();
}
else{
	cout<<"failed to open file"<<endl;
}
}
void encryptfile(const string & inputfile, const string & outputfile)
{
	ifstream input(inputfile);
	ofstream output(outputfile);
	if (input.is_open() && output.is_open())
	{
		char ch; 
		while(input.get(ch))
		{
			ch++;
			output.put(ch);
		}
	
	input.close();
	output.close();
	cout<<"failed encrypted successfully"<<endl;
}
else{
	cout<<"failed to open the file"<<endl;
}
}
int main()
{ string inputfile="test.txt";
displayfileContent("test.txt");
cout<<endl;
string outputfile="encrypted_test.txt";
encryptfile(inputfile,outputfile);
	displayfileContent("encrypted_test.txt");
cout<<endl;
}
