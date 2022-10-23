#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int n;
int a[1001][1001];

int main()
{	
	ifstream fileInput("C:/Users/ADMIN/Desktop/TRR/input2.txt");

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
	
	ofstream fileOutput ("input2_1.txt");
	for (int i =1; i<=n; i++ ){
		fileOutput<< i <<" : ";
		{
			for(int j = 1; j<=n; j++){
			if (a[i][j]==1){
				fileOutput<<j<<" ";
			}
			}
		}
		fileOutput<<endl;
	}
	cout<<"Ghi file thanh cong";
}
