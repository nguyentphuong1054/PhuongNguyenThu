#include <iostream>
#include <fstream>
#include <conio.h>
#include <vector>
#include <cstdlib>
using namespace std;

int n;
int a[1001][1001];
int deg[1001];

int main()
{	
	ifstream fileInput("C:/Users/ADMIN/Desktop/TRR/input2_2.txt");
	if (fileInput.fail())
	{
		cout << "Failed to open this file!" << endl;
		return -1;
	}
	fileInput>>n;
	while (!fileInput.eof())
	{		
		for(int x = 1; x<=n; x++){
			int i;
			fileInput>>i;
			int j;
			fileInput >> j;
			a[i][j]=1;
		}
	}
		//Bac cua dinh i
	for(int i =1; i<=n; i++){
		for(int j = 1; j<=n ; j++){
			if(a[i][j]==1 ){
				deg[i] ++;
			}
		}
	}

	
	ofstream fileOutput("Output2_2.txt");
	fileOutput << n << endl;
	fileOutput<<"Ma tra ke tuong ung: "<<endl;
	for(int i =1; i<=n; i++){
   		for(int j =1; j<=n; j++){
   			fileOutput<<a[i][j]<<"\t";
		}	
	fileOutput<<endl;
	}
	
	fileOutput <<"Danh sach canh cua do thi la:"<<endl;
	for (int i =1; i<=n; i++ )
		{	
			for(int j = 1; j<=n; j++){
			if (a[i][j]==1 && i<=j){
				fileOutput<< i <<"  ";
				fileOutput<<j<<endl;
			}
			}
		}
		
	fileOutput<<"Bac cua cac dinh la:"<<endl;
	for(int i =1; i<= n ; i++){
		fileOutput<<"Bac cua dinh "<<i<<" la: "<<deg[i]<<endl;
	}
	
	fileOutput.close();
	fileInput.close();
	cout<<"Ghi file thanh cong";
	return 0;
}
	
