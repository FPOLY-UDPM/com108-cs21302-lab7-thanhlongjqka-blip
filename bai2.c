/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Long]
 * MSSV:      [PS49311]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

int main()
{
    char username[50];
    char password[50];
    char correctUsername[] = "longnhok3";
    char correctPassword[] = "anhyeuem";

    printf("Nhap username: ");
    scanf("%s", username);
    printf("Nhap password: ");
    scanf("%s", password);

    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0)
    {
        printf("Dang nhap thanh cong!\n");
    }
    else
    {
        printf("Dang nhap that bai!\n");
    }

    return 0;
}