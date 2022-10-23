#include <iostream>
#include <fstream>
using namespace std;

//Ma tran ke

int n, m;
int a[1001][1001];

int main()
{
	ofstream f ("input2.txt");	
	cout<<"Nhap so dinh n: ";
	cin>>n;
	cout<<"Nhap so canh m: ";
	cin>>m;
	cout<<"Hai dinh noi voi nhau bang 1 canh :";
	for(int i = 0; i<m ; i++){
		int x,y;
		cin >> x >> y;
		a[x][y] =1;
		}
	f<< n<< endl;
	for (int i =1; i<=n; i++ ){
		for (int j = 1; j<=n ; j++){
			f<<a[i][j]<<"   ";
		}
		f<<endl;
	}
	f.close();
	cout<<"Ghi file thanh cong";
	return 0;
}
