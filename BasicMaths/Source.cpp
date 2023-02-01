#include<iostream>
#include <bits/stdc++.h>
#include<string>

using namespace std;

int lengthOfNumber(int n,int l) {
	int len =l ,num=n;
	while (num > 0) {
		num = num / 10;
		len++;

	}
	
	return len;
}



//convert to string

int convertToString(int num) {

	string s;
	int n = num;
	s = to_string(n);
	
	n = s.length();
	return n;

}

int countDigits(int num) {
	int log = floor(log10(num) + 1);

	return log;
}

int main() {

	//Technique 1

	//Given an integer N , write program to count number of digits in N.
	int n,len=0;
	cout << "Enter the Number " << endl;
	cin >> n;
	
	
	while (n > 0) {
		len++;
		n = n / 10;
		
	}
	
	cout <<"Number has "<<  len << " digits " << endl;
	
	
    cout << "Example using Functions " << lengthOfNumber(n, len) << " digits " << endl;


	/*
	
	Convert the integer into a string.
	Find the length of the string      
	*/


	//Technique 2

	int n1, len1 = 0;
	cout << "Enter the Number " << endl;
	cin >> n1;


	


	cout << "Example using converttoString  Functions " << convertToString(n1) << " digits " << endl;


	//Technique 3

	int n2, len2 = 0;
	cout << "Enter the Number " << endl;
	cin >> n2;

	cout << "Example using countDigits  Functions " << countDigits(n1) << " digits " << endl;


	return 0;
}                               