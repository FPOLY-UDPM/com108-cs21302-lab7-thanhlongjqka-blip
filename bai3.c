/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Long]
 * MSSV:      [PS49311]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main()
{
    char chuoi[5][100]; //[5] → có 5 phần tử (5 chuỗi) [100] → mỗi chuỗi dài tối đa 100 ký tự
    char temp[100]; // temp dùng để lưu trữ tạm thời khi hoán đổi chuỗi trong quá trình sắp xếp

    // Nhập 5 chuỗi
    printf("Nhap 5 chuoi bat ky:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Chuoi %d: ", i + 1);
        fgets(chuoi[i], 100, stdin); //fgets(ten_mang, kich_thuoc, nguon_nhap), stdin → nhập từ bàn phím

        // xóa ký tự xuống dòng \n
        chuoi[i][strcspn(chuoi[i], "\n")] = '\0';
    }

    // Sắp xếp chuỗi theo alphabet (tăng dần)
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(chuoi[i], chuoi[j]) > 0)
            {
                strcpy(temp, chuoi[i]);
                strcpy(chuoi[i], chuoi[j]);
                strcpy(chuoi[j], temp);
            }
        }
    }

    // In kết quả
    printf("\nThu tu chuoi sau khi sap xep:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", chuoi[i]);
    }

    return 0;
}