#include <iostream>
using namespace std;

int deleteRecords(char charArray[], int &size);
int main(){
	char a[10];
	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'a';
	a[3] = 'c';
	char b[10] = { 'a', 'b', 'c', 'c' };
	char c[10] = { 'a', 'b', 'a', 'b' };
	char d[10] = { 'a', 'b', 'b', 'b' };
	char e[10] = { 'a', 'b', 'a', 'a' };
	char f[10] = { 'a', 'a', 'a', 'a' };
	int size = 4;
	cout << "Array a" << endl;
	deleteRecords(a, size);
	cout << "Array b" << endl;
	deleteRecords(b, size);
	cout << "Array c" << endl;
	deleteRecords(c, size);
	cout << "Array d" << endl;
	deleteRecords(d, size);
	cout << "Array e" << endl;
	deleteRecords(e, size);
	cout << "Array f" << endl;
	deleteRecords(f, size);
	system("pause");
	return 0;
}

int deleteRecords(char charArray[], int &size){
	cout << "deleting record" <<endl;
	for (int i = 0; i < size; i++){
		for (int j = i+1; j < size; j++){
			if (charArray[j] == charArray[i]){
				charArray[j] = NULL;
				for (int k = j+1; k < size; k++){
					charArray[j] = charArray[k];
				}
				size--;
			}
			
		}
		cout << charArray[i] << endl;
	}
	return 0;
}