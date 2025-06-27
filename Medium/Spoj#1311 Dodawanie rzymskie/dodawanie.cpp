#include <bits/stdc++.h>

using namespace std;

#define MAXN 4


int romanToNumber(string str) {
	map<char, int> m;
	m.insert({'I', 1});
	m.insert({ 'V', 5 });
	m.insert({ 'X', 10 });
	m.insert({ 'L', 50 });
	m.insert({ 'C', 100 });
	m.insert({ 'D', 500 });
	m.insert({ 'M', 1000 });
	int sum = 0;
	for (int i = 0; i < str.length(); i++) 
	{
		/* If present value is less than next value,
		   subtract present from next value and add 
		   the resultant to the sum variable.*/
		if (m[str[i]] < m[str[i + 1]])
		{
			sum+=m[str[i+1]]-m[str[i]];
			i++;
			continue;
		}
		sum += m[str[i]];
	}
	return sum;
}

string numberToRoman(int num) {
	string ans = "";
	int tmp = 0, i = 1;

	while(num > 0)
	{
		tmp = num%10;

		if(tmp == 1) {
			if(i == 1) ans = 'I' + ans;
			else if(i == 2) ans = 'X' + ans;
			else if(i == 3) ans = 'C' + ans;
			else if(i == 4) ans = 'M' + ans;
		}else if(tmp == 2) {
			if(i == 1) ans = "II" + ans;
			else if(i == 2) ans = "XX" + ans;
			else if(i == 3) ans = "CC" + ans;
			else if(i == 4) ans = "MM" + ans;
		}else if(tmp == 3) {
			if(i == 1) ans = "III" + ans;
			else if(i == 2) ans = "XXX" + ans;
			else if(i == 3) ans = "CCC" + ans;
			else if(i == 4) ans = "MMM" + ans;
		}else if(tmp == 4) {
			if(i == 1) ans = "IV" + ans;
			else if(i == 2) ans = "XL" + ans;
			else if(i == 3) ans = "CD" + ans;
			else if(i == 4) ans = "XL" + ans;
		}else if(tmp == 5) {
			if(i == 1) ans = 'V' + ans;
			else if(i == 2) ans = 'L' + ans;
			else if(i == 3) ans = 'D' + ans;
		}else if(tmp == 6) {
			if(i == 1) ans = "VI" + ans;
			else if(i == 2) ans = "LX" + ans;
			else if(i == 3) ans = "DC" + ans;
		}else if(tmp == 7) {
			if(i == 1) ans = "VII" + ans;
			else if(i == 2) ans = "LXX" + ans;
			else if(i == 3) ans = "DCC" + ans;
		}else if(tmp == 8) {
			if(i == 1) ans = "VIII" + ans;
			else if(i == 2) ans = "LXXX" + ans;
			else if(i == 3) ans = "DCCC" + ans;
		}else if(tmp == 9) {
			if(i == 1) ans = "IX" + ans;
			else if(i == 2) ans = "XC" + ans;
			else if(i == 3) ans = "CM" + ans;
		}

		i++;
		num /= 10;
	}

	return ans;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	string num1, num2, num;
	int i = 0, ans;
	
	while(getline(cin, num))
	{

		i = 0;

		num1 = "";
		num2 = "";

		while(num[i] != ' ')
		{
			num1 += num[i]; 
			i++;
		}

		i++;

		while(i < num.length())
		{
			num2 += num[i];
			i++;
		}

		/* cout<<romanToNumber(num1)<<' '<<romanToNumber(num2)<<'\n'; */
		ans = romanToNumber(num1) + romanToNumber(num2);
		cout<<numberToRoman(ans)<<'\n';
	}

	return 0;
}
