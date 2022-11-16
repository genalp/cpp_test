#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
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

int main()
{

    vector<int> vec = {5,2,4,1,3,6,0};
    quicksort(vec, 0, vec.size() - 1);
    for(auto it : vec) {
        cout << it << endl;
    }

    // FILE * fp;
    // char buff[64];
    // char temp[64] = "0";
    // int i,len;

    // fp = fopen("./test.txt", "r");
    // fscanf(fp, "%s", buff);

    // while (buff[0] != '-')
    // {
    //     strcpy(temp, "003");
    //     temp[3] = buff[0];
    //     temp[4] = '\0';     //处理第一位数
    //     len = strlen(buff);
    //     // 处理接下来十位数
    //     for(i = 0; i < len; i++)
    //     {
    //         strcat(temp, "003");
    //         temp[i * 4 + 3] = buff[i];
    //         temp[i * 4 + 4] = 0;
    //     }
    //     cout << temp << endl;
    //     fscanf(fp, "%s", buff);
    // }

    system("pause");
    return 0;
}