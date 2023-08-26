/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 
    , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    (กำหนดให้ข้อนี้ใช้คำสั่ง for แทนคำสั่งเงื่อนไขได้เท่านั้น)
    
    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !
*/

#include<stdio.h>

int main(){

    int ip;

    printf("enter score : \n");
    scanf("%d" , &ip);

    for (int i = 0; ip >= 80; i++)
    {
        printf("A !");
        break;
    }

    for (int i = 0; ip >= 75 && ip < 80; i++)
    {
        printf("B+ !");
        break;
    }

    for (int i = 0; ip >= 70 && ip < 75; i++)
    {
        printf("B !");
        break;
    }

    for (int i = 0; ip >= 65 && ip < 70; i++)
    {
        printf("C+ !");
        break;
    }
    
    for (int i = 0; ip >= 60 && ip < 65; i++)
    {
        printf("C !");
        break;
    }

    for (int i = 0; ip >= 55 && ip < 60; i++)
    {
        printf("D+ !");
        break;
    }

    for (int i = 0; ip >= 50 && ip < 55; i++)
    {
        printf("D !");
        break;
    }

    for (int i = 0; ip < 50; i++)
    {
        printf("F !");
        break;
    }
    

    return 0 ;
}