#include<iostream>
#include<vector>
using namespace std;

//class Solution {
//public:
//	int FindGreatestSumOfSubArray(vector<int> array) {
//		int result = 0;
//		int temp = 0;
//		int i = 0;
//		for (i = 0; i < array.size(); ++i){
//			result += array[i];
//		}
//		i = 0;
//		while (i < array.size()){
//			for (int j = i; j < array.size(); ++j){
//				temp += array[j];
//				if (temp >= result){
//					result = temp;
//				}
//			}
//			temp = 0;
//			++i;
//		}
//		return result;
//	}
//};

class Solution {
public:
	int FindGreatestSumOfSubArray(vector<int> array) {

		int cursum = array[0];
		int maxsum = array[0];
		for (int i = 1; i<array.size(); i++){
			cursum += array[i];
			if (cursum<array[i])
				cursum = array[i];
			if (cursum>maxsum)
				maxsum = cursum;
		}
		return maxsum;
	}
};

void TestFunc(){
	vector<int> array = { 100, -8, -1, -5, -9 };
	Solution s;
	int result = s.FindGreatestSumOfSubArray(array);
	cout << result << endl;
}

int main(){
	TestFunc();
	system("pause");
	return 0;
}