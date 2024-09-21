#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
void displayFileContent(const string& filename) 
{
ifstream file(filename);
	string line;
	if(file.is_open()) {
		cout<<"File Content"<<endl;
		while(getline(file,line)) {
			cout<<line<<endl;
		}
		file.close();
	}
	else{
		cout<<"Failed to open a file"<<endl;
	}
}

int main()
{
	vector<string>inputFiles=
	{
		
		"test1.txt",
		"test2.txt",
		"test3.txt",
		"test4.txt"
	};
	cout<<"Content of test1.txt, test2.txt, test3.txt,test4.txt:"<<endl;
	
	displayFileContent("test1.txt");
	displayFileContent("test2.txt");
	displayFileContent("test3.txt");
	displayFileContent("test4.txt");
	string outputFile="merged_test_file.txt";
	ofstream mergedFile(outputFile);
	if(mergedFile.is_open()){
		for(const auto & inputFile: inputFiles){
		ifstream inputFileStream(inputFile);
		if(inputFileStream.is_open())
		{
			string line;
			while(getline(inputFileStream,line))
			{
				mergedFile<<line<<endl;
			}
			inputFileStream.close();
		}
		else
		{
			cout<<"Failed to open file"<<inputFile<<endl;
		}
	}
	mergedFile.close();
	cout<<"\nFiles merged successfully"<<endl;
	cout<<"\ncontent of merged file"<<endl;
	displayFileContent("merged_test_file.txt");
}
else
{
	cout<<"failed to open the output file"<<endl;
}
}