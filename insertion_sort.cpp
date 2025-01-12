#include <iostream>

using namespace std; 


int main(){
	int num[6] = {5,2,4,6,1,3};
	int sorted_nums[6];


	for (int i = 1; i<6; i++){
		int current_index = num[i];
		int j = i-1;
		while ((j >= 0) && (num[j] > current_index)){
			num[j +1] = num[j];
			j = j-1;
		}
		num[j +1 ] = current_index;
	}

	    for (int i = 0; i < 6; i++) {
        cout << num[i] << " "; 
    }

    return 0;
}