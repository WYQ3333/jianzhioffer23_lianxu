#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int FindGreatestSumOfSubArray(vector<int> array) {
		int result = 0;
		int temp = 0;
		for (int i = 0; i < array.size(); ++i){
			temp += array[i];
			if (temp >= result){
				result = temp;
			}
		}
		return result;
	}
};

void TestFunc(){

}

int main(){
	TestFunc();
	system("pause");
	return 0;
}