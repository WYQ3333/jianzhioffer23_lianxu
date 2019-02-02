#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int FindGreatestSumOfSubArray(vector<int> array) {
		int result = 0;
		int temp = 0;
		int i = 0;
		while (i < array.size()){
			for (int j = i; j < array.size(); ++j){
				temp += array[j];
				if (temp >= result){
					result = temp;
				}
			}
			temp = 0;
			++i;
		}
		return result;
	}
};

void TestFunc(){
	vector<int> array = { 1, -2, 3, 10, -4, 7, 2, -5 };
	Solution s;
	int result = s.FindGreatestSumOfSubArray(array);
	cout << result << endl;
}

int main(){
	TestFunc();
	system("pause");
	return 0;
}