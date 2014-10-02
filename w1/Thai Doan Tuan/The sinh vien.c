#include <stdio.h>
int main()
{
    char ten[20];
    char mssv[8];
    char ns[15];
    char lop[7];
    printf("nhap ten sinh vien(VD: Nguyen Van A):");
    gets(ten);
    printf("nhap ma so sinh vien(VD: 20141234): ");
    gets(mssv);
    printf("nhap ngay,thang,nam sinh(VD: 1/1/1996):");
    gets(ns);
    printf("nhap lop hoc(VD: BK2.01): ");
    gets(lop);
    printf("____________________________\n");
    printf("|DAI HOC BACH KHOA HA NOI\n");
    printf("|     THE SINH VIEN      \n");
    printf("|*Ho va Ten: %s \n",ten);
    printf("|*Ma so sinh vien: %s \n",mssv);
    printf("|*Ngay sinh: %s \n",ns);
    printf("|*Lop: %s \n",lop);
    printf("_____________________________");
}
