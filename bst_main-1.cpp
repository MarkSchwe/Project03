#include <iostream>
#include "d_except.h"
#include "project3_bstree.h"
//uses some bits from the main given in the project description.

using namespace std;


int main()
{
	int arr[] = {10, 25, 26, 28, 29, 30, 34, 35, 40, 50, 65};
	int arrSize = sizeof(arr)/sizeof(int);
	stree<int> int_str;
    for(int i=0; i<arrSize; i++){
       int_str.insert(arr[i]);
	}
	int_str.displayTree(4);
	int_str.insert(33);
    int_str.displayTree(4);
	int_str.erase(26);
	int_str.displayTree(4);
	int_str.erase(35);
	int_str.displayTree(4);
	int_str.erase(30);
	int_str.displayTree(4);
	cout << endl;
	
	char Carr[]= { 'S','J', 'K', 'L', 'X', 'F', 'E', 'Z' };
	stree<char> char_str;
	for(int i=0; i<arrSize; i++){
       char_str.insert(Carr[i]);
	}
	char_str.displayTree(4);
	char_str.insert('H');
	char_str.displayTree(4);
	char_str.erase('F');
	char_str.displayTree(4);
	return 0;
}


