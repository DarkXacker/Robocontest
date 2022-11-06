#include <bits/stdc++.h>

using namespace std;

string _small_numbers[10] = {"nol","bir","ikki","uch","to'rt","besh","olti","yetti","sakkiz","to'qqiz"};
string _tens[10] = {"","o'n","yigirma","o'ttiz","qirq","ellik","oltmish","yetmish","sakson","to'qson"};
string _scale_numbers[4] = {"yuz","ming","million","milliard"};

string three_digit_group_to_word(long long n);
string number_to_words(long long n);

int main() {
	long long n;
	
	cin >> n;
	
	cout << number_to_words(n);
	return 0;
}

string three_digit_group_to_word(long long n) {
	string group_text = "";
	
	long long hundreds = n / 100;
	long long tens_units = n % 100;
	
	if ( hundreds != 0) {
		group_text += _small_numbers[hundreds] + " " + _scale_numbers[0] + " ";
	}
	
	if (tens_units != 0) {
		int tens = tens_units / 10;
		int units = tens_units % 10;
		
		if (tens != 0) {
			group_text += _tens[tens] + " ";
		}
		
		if (units != 0) {
			group_text += _small_numbers[units];
		}
	}
	
	return group_text;
}

string number_to_words(long long n) {
	if (n == 0) return _small_numbers[0];
	
	long long digit_groups[4], tmp = (n>0?n:-n);
	string group_text[4];
	
	for (int i=0; i<4; i++) {
		digit_groups[i] = tmp % 1000;
		tmp /= 1000;
	}
	
	for (int i=0; i<4; i++) {
		group_text[i] = three_digit_group_to_word(digit_groups[i]);
	}
	
	string combined = group_text[0];
	
	for (int i=1; i<4; i++) {
		if (digit_groups[i] != 0) {
			bool is_last_space = group_text[i][group_text[i].size()-1] == ' ';
			
			string prefix = group_text[i] + (!is_last_space ? " " : "") + _scale_numbers[i] + " ";
			
			combined = prefix + combined;
		}
	}
	
	if (n < 0) {
		combined = "minusdan " + combined;
	}
	
	return combined;
}