/******************************************************************************
 * Họ và tên: [Nguyễn Phúc Nhân]
 * MSSV:      [PS47835]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float binhPhuong(float *a, float *b)
{
    float binhPhuong;
    binhPhuong = *a * *b;
    return binhPhuong;
}

void randomArray(int size, int size1, float arr[size][size1],  int min, int max)
{
    srand(time(NULL));
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size1; j++)
        arr[i][j] = rand() % (max - min + 1) + min; 
    }
}

int main()
{
    int quayLai;
    do
    {
      int n, m;
    do
    {
       printf("Nhập kích thước n:");
        scanf("%d",&n);
    } while (n < 0);
    
    do
    {
       printf("Nhập kích thước m:");
        scanf("%d",&m);
    } while (m < 0);
    

    

    float mang[n][m];
    randomArray(n, m, mang, 1, 100);
    float binhPhuongPhanTu;
    // Tính bình phương của phần tử trong mảng 2 chiều
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            binhPhuongPhanTu = binhPhuong(&mang[i][j], &mang[i][j]);
            printf("Giá trị bình phương của phần tử [%d][%d] trong mảng 2 chiều là : %.1f\n",i, j, binhPhuongPhanTu);
        }
        printf("\n");
    }
    
    printf("Bạn có muốn tiếp tục?");
    printf("Hãy nhập số 1 để tiếp tục, số 0 để thoát: ");
    scanf("%d",&quayLai);
    } while (quayLai == 1);
    
    return 0;
}