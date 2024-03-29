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
	
	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
//Menukar element pada index x dengan element pada index y
void swap(int x, int y)
{
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
	mov_count++;
}

void q_short(int low, int high);
{

}