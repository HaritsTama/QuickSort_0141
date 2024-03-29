#include<iostream>
using namespace std;

int arr[20];
int cmp_count; //jumlah perbandingan
int mov_count; //jumlah pergerakan data
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array : ";
		cin >> n;

		if (n > 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;

	}
}