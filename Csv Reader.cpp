#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>
 
using namespace std;
 
int main()
{
 string Date,Open,High,Low,Close,Shares_Traded,Turnover;
  
	vector<string>cDate;
  vector<float>cOpen;
  vector<float>cHigh;
  vector<float>cLow;
  vector<float>cClose;
  vector<float>cShares_Traded;
  vector<float>cTurnover;

  int i = 0;

  
  	string file;
	cout << "Enter the filename: ";
	cin >> file;
  
 
	ifstream coeff(file); 
	if (coeff.is_open()) 
	{
		
		string line;
		getline(coeff, line);

		while (!coeff.eof()) 
		{
			
			getline(coeff,Date,',');
      cDate.push_back(Date);
      
			getline(coeff, Open, ',');
			cOpen.push_back(stof(Open));
      
			getline(coeff,High, ',');
			cHigh.push_back(stof(High));

      getline(coeff,Low, ',');
			cLow.push_back(stof(Low));

      getline(coeff,Close, ',');
			cClose.push_back(stof(Close));

      getline(coeff,Shares_Traded, ',');
			cShares_Traded.push_back(stof(Shares_Traded));

			getline(coeff, Turnover, '\n'); 
			cTurnover.push_back(stof(Turnover));

      i += 1;
		}
		coeff.close(); 

    cout << "DATE" << "\t" << "OPEN" << "\t" << "HIGH" << "\t" << "LOW" << "\t" << "CLOSE" << "\t" << "SHARES_TRADED" << "\t" << "TURNOVER" << endl;
  string DATE;
	float OPEN, HIGH, LOW, CLOSE,SHARES_TRADED,TURNOVER;
	for (int j = 0; j < i; j++) {
		cout << cDate[j] << "\t" << cOpen[j] << "\t" << cHigh[j] << "\t" << cLow[j] << "\t" << cClose[j] << "\t" << cShares_Traded[j] << "\t" << cTurnover[j] << endl;
		
    }
}
  cout << endl;
  return 0;
 
float Sum,average;
for(int j=0;j<i;j++)
{
  Sum = Sum + cClose[j];
  
}
average = Sum/i;
cout<<average;
}