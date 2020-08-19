#include <stdio.h>

//이미 정렬이 되어 있는 경우 시간 복잡도 O(n^2)
void quickSort(int *data, int startidx, int endidx)
{
    if (startidx >= endidx)
        return;

    int key = startidx;
    int i = startidx + 1;
    int j = endidx;
    int temp;
    while (i <= j)
    {
        while (data[i] >= data[key]) //얘는 i가 end index 넘어갈까봐 노심초사 안해도 되?
        {
            i++;
        }
        while (data[j] <= data[key] && j > startidx)
        {
            j--;
        }
        if (i > j) //현재 엇갈린 상태면 키값과 교체
        {
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        }
        else
        {
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }
    quickSort(data, startidx, j - 1);
    quickSort(data, j + 1, endidx);
}
int main()
{
    printf("hello");
    return 0;
    int number = 10;
    int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    quickSort(data, 0, 9);
}