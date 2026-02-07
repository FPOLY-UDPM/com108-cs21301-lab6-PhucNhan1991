/******************************************************************************
 * Họ và tên: [Nguyễn Phúc Nhân]
 * MSSV:      [PS47835]
 * Lớp:       [Cs21301]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Hàm phát sinh số ngẫu nhiên
void randomArray(float arr[], int size, int min, int max)
{
    srand(time(NULL));
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % (max - min + 1) + min; 
    }
}

// Hàm in mảng
void printArray(float arr[], int size)
{
    printf("Các phần tử của mảng là : \n");
    for(int i = 0; i < size; i++)
    {
        printf("%.2f", arr[i]);
    }
    printf("\n");
}

float maxTrongMang(float arr[],int n)
{
    float max = arr[0];
    for(int i = 0; i< n; i++ )
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

float minTrongMang(float arr[],int n)
{
    float min = arr[0];
    for(int i = 0; i< n; i++ )
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int soPhanTu;
    do
    {
        printf("Hãy nhập số lượng phần tử: ");
        scanf("%d", &soPhanTu);
    }while (soPhanTu < 0);

    float mang1[soPhanTu];
    randomArray(mang1,soPhanTu, 1, 100);
    printArray(mang1, soPhanTu);
    
    float max, min;
    max = maxTrongMang(mang1, soPhanTu );
    min = minTrongMang(mang1, soPhanTu);

    printf("Giá trị lớn nhất trong mảng là : %.2f\n", max);
    printf("Giá trị nhỏ nhất trong mảng là : %.2f", min);
    return 0;
}

