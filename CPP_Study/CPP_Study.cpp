#include <iostream>
using namespace std;
#include <string>
#include "math.h"

/*

10. 자릿수의 합

N개의 자연수가 입력되면 각 자연수의 자릿수의 합을 구하고, 그 합이 최대인 자연수를 출력하는 프로그램을 작성하세요.
각 자연수의 자릿수의 합을 구하는 함수를 int digit_sum(int x)를 꼭 작성해서 프로그래밍 하세요.

▣ 입력설명
첫 줄에 자연수의 개수 N(3<=N<=100)이 주어지고, 그 다음 줄에 N개의 자연수가 주어진다.
각 자연수의 크기는 10,000,000를 넘지 않는다.

▣ 출력설명
자릿수의 합이 최대인 자연수를 출력한다. 자리수의 합이 최대인 자연수가 여러개인 경우 그
중 값이 가장 큰 값을 출력합니다.

▣ 입력예제 1
5
125 15232 79 1325 97

▣ 출력예제 1
97

*/

int digit_sum(int x)
{
	int sum = 0;

	while (true)
	{
		if (x == 0) break;

		sum += x % 10;
		x /= 10;
	}

	return sum;
}

int main()
{
	int n, num, max = 0, maxNum = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (max == digit_sum(num))
		{
			if (num > maxNum) maxNum = num;
		}
		if (max < digit_sum(num))
		{
			max = digit_sum(num);
			maxNum = num;
		}
	}

	cout << maxNum;
	return 0;
}