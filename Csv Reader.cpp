#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
 
using namespace std;


 
int main()
{
 
	vector<vector<string>> content;
	vector<string> row;
	string line, word;
 
	fstream file ("April.csv", ios::in);
	if(file.is_open())
	{
		while(getline(file, line))
		{
			row.clear();
 
			stringstream str(line);
 
			while(getline(str, word, ','))
				row.push_back(word);
			content.push_back(row);
		}
	}

  float sum = 0;
  for(int i = 1;i<20;++i){
    sum += stof(content[i][4]);
  }

  float average = sum/19;
  cout<<"Average of close = "<<average<<endl;
 
	return 0;
}