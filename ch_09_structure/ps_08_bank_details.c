#include <stdio.h>
#include <string.h>
struct bankdetail
{
    int iifsc_code;
    char name[33];
    int total_money;
    int expiry_date;
    long phone_no;
};
int main()
{
    struct bankdetail bd;
    bd.iifsc_code = 9688533;
    strcpy(bd.name, "roshan");
    bd.total_money = 96320;
    bd.expiry_date = 11092023;
    bd.phone_no = 7008280274;

    printf("the name of client is %s\n", bd.name);
    printf("the iifsc code of client is %d\n", bd.iifsc_code);
    printf("the total money client having in bank account is  %d\n", bd.total_money);
    printf("the expiry date of  client debit card is %d\n", bd.expiry_date);
    //some error is showing if you able to solve pls do
    printf("the phone number of client is %d\n", bd.phone_no);
    return 0;
}