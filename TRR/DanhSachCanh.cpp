#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int n;
int a[1001][1001];

int main()
{	
	ifstream fileInput("C:/Users/ADMIN/Desktop/TRR/input1.txt");

	if (fileInput.fail())
	{
		cout << "Failed to open this file!" << endl;
		return -1;
	}
	
	while (!fileInput.eof())
	{
		fileInput >> n;
		for(int i= 1; i<=n; i++)
		{
			for (int j = 1; j<=n ; j++)
			{
				fileInput >> a[i][j];
			}
		
		}
	}
	
	ofstream fileOutput ("input1_2.txt");
	fileOutput << n << endl;
	for (int i =1; i<=n; i++ )
		{	
			for(int j = 1; j<=n; j++){
			if (a[i][j]==1 && i<=j){
				fileOutput<< i <<"  ";
				fileOutput<<j<<" "<<endl;
			}
			}
		}
	fileOutput.close();
	fileInput.close();
	cout<<"Ghi file thanh cong";
}
