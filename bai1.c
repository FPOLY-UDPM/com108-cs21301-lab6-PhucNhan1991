/******************************************************************************
 * Họ và tên: [Nguyên Phúc Nhân]
 * MSSV:      [PS47835]
 * Lớp:       [Cs21301]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY

/* Tính trung bình cộng các số chia hết cho 3 trong 1 mảng
Input : Nhập n phần tử
Process : Duyệt trong mảng các số có thể chia hết cho 3
        Nếu mang[i] % 3 thì 
            tong = tong + mang[i];
            soLuong = soLuong +1;
        
        
        Nếu số lượng  == 0 thì in ra trong mảng không có số nào chia hết cho 3
        còn không thì trung bình cộng = tong /so luong
Output : Trung bình cộng
*/
#include <stdio.h>
int main()
{
    int soPhanTu;
    int tong = 0, soLuong = 0;
    float trungBinhCong;
    printf("Hãy nhập số phần tử :");
    scanf("%d", &soPhanTu);

    int mang1[soPhanTu];

    for(int i =0; i< soPhanTu; i++)
    {
        printf("Hãy nhập giá trị của phần tử thứ %d: ",i);
        scanf("%d",&mang1[i]);
    }
    
    for (int i =0; i< soPhanTu; i++)
    {
        if(mang1[i] % 3 == 0)
        {
            tong += mang1[i];
            soLuong += 1;
        }
    }
    if(soLuong ==0)
    {
        printf("Trong mảng không có phần tử nào chia hết cho 3");
    }
    else 
    {trungBinhCong = tong / soLuong;
        printf("Trung bình cộng của các số chia hết cho 3 trong mảng 1 là : %.2f", trungBinhCong);
    }
    return 0;
}