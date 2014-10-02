#include <stdio.h>

int main()
{
    char name[30],age[20],id[10],gender[10],year[5];
    printf("Nhap vao ten sinh vien : ");
    gets(name);
    printf("Nhap vao ngay thang nam sinh dd/mm/yy : ");
    gets(age);
    printf("nhap vao ma so sinh vien : ");
    gets(id);
    printf("nhap vao gioi tinh : ");
    gets(gender);
    printf("nhap vao khoa :(vd K59) ");
    gets(year);
    puts("==================================\n");
    puts("     Dai hoc Bach Khoa HN\n");
    printf("MSSV :            %s\n",id);
    printf("Ho va ten :       %s\n",name);
    printf("Ngay sinh :       %s\n",age);
    printf("Gioi tinh :       %s\n",gender);
    printf("Nien khoa :       %s\n",year);
    puts("==================================\n");
    return 0;
}
