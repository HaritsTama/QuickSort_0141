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

void q_short(int low, int high)
{
	int temp;
	int pivot, i, j;
	if (low > high) //step 1
	{
		return;
	}
		
	pivot = arr[low]; //step 2
	i = low + 1; //step 3
	j = high; // step 4

	while (i <= j) //step 10
	{
		//Mencari element lebih besar dari pivot
		while ((arr[i] <= pivot) && (i <= high)) //step 5
		{
			i++; //step 6
			cmp_count++; 
		}
		cmp_count++;
		//mencari element lebih kecil atau sama dengan dari pivot
		while ((arr[j] > pivot) && (j >= low)) //step 7
		{
			j--; //step 8
			cmp_count++;
		}
		cmp_count++;
		if (i < j) //step 9
		{
			//menukar element pada index i dengan element pada index j
			swap(i, j);
		}
	}

	if (low < j) //step 11
	{
		//menukar element pivot dengan element index j
		swap(low, j);
	}
}