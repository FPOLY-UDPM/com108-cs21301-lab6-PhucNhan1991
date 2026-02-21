/******************************************************************************
 * Họ và tên: [Nguyễn Phúc Nhân]
 * MSSV:      [PS47835]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hoanDoi(float *a, float *b)
{
    float bienTam;
    bienTam = *a;
    *a = *b;
    *b = bienTam;
}
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
int main()
{
    int quayLai;
    do
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

        for(int i= 0; i< soPhanTu;i++)
        {
            for(int j = 0; j< soPhanTu; j++)
            {
                if(mang1[i] > mang1[j])
                {
                    hoanDoi(&mang1[i], &mang1[j]);
                }
            }
        }
        printf("Mảng sau khi sắp xếp giảm dần:");
        for(int i = 0; i< soPhanTu; i++)
        {
            printf("Vị trí thứ %d trong mảng 1 là: %.0f\n", i, mang1[i]);
        }
        printf("Bạn muốn tiếp tục không?\n");
        printf("Nhấn 1 nếu muốn sắp xếp mảng khác, 0 để thoát: ");
        scanf("%d", &quayLai);
    } while (quayLai == 1);
    
    
   return 0; 
}