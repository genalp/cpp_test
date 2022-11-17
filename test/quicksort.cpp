#include "quicksort.h"

using namespace std;

void quicksort(vector<int>& arr, int left, int right) {
    if(left >= right) {
        return;
    }
    int i = left;
    int j = right;
    int base, temp;
    base = arr[left];
    while(i < j) {
        while(arr[j] >= base && i < j) {
            j--;
        }
        while(arr[i] <= base && i < j) {
            i++;
        }
        if(i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[left] = arr[i];
    arr[i] = base;
    quicksort(arr, left, i - 1);
    quicksort(arr, i + 1, right);

    // if(left >= right)
	// 	return;
	// int i, j, base, temp;
	// i = left, j = right;
	// base = arr[left];  //取最左边的数为基准数
	// while (i < j)
	// {
	// 	while (arr[j] >= base && i < j)
	// 		j--;
	// 	while (arr[i] <= base && i < j)
	// 		i++;
	// 	if(i < j)
	// 	{
	// 		temp = arr[i];
	// 		arr[i] = arr[j];
	// 		arr[j] = temp;
	// 	}
	// }
	// //基准数归位
	// arr[left] = arr[i];
	// arr[i] = base;
	// quicksort(arr, left, i - 1);//递归左边
	// quicksort(arr, i + 1, right);//递归右边
}
