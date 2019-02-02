#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int TheSum(int plow, int phigh,vector<int> array){
		int result = 0;
		for (int i = plow; i < phigh; ++i){
			result += array[i];
		}
		return result;
	}

	int FindGreatestSumOfSubArray(vector<int> array) {
		int result = 0;
		result = TheSum(0, array.size() - 1, array);
		int plow = 0;
		int phigh = array.size() - 1;
		while (phigh > plow){
			int temp = TheSum(plow, phigh, array);
			if (temp >= result){
				result = temp;
			}
			else if (temp < result){
				continue;
			}
		}
	}
};

void TestFunc(){

}

int main(){
	TestFunc();
	system("pause");
	return 0;
}