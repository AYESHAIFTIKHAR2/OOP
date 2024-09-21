#include<iostream>
#include<fstream>
using namespace std;
void displayFileContent(const string& filename) {
	ifstream file(filename);
	string line;
	if(file.is_open()) {
		cout<<"File Content"<<endl;
		while(getline(file,line)) {
			cout<<line<<endl;
		}
		file.close();
	} else {
		cout<<"Failed to open file"<<endl;

	}
}
int main() {
	displayFileContent("new_test.txt");
	cout<<endl;
	ofstream outputFile;
	outputFile.open("new_test.txt",ios::app);
	displayFileContent("new_test.txt");
	cout<<endl;
	if(outputFile.is_open()) {
		string newData;
		cout<<"Enter the data to append";
		getline(cin,newData);
		outputFile<<newData<<endl;
		outputFile.close();
		cout<<"Data Appended sucessfully"<<endl;
		displayFileContent("new_test.txt");
		cout<<endl;
	} else {
		cout<<"Failed to open File"<<endl;
	}
}