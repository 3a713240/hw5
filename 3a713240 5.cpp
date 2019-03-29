#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
   int hr1,m1,s1,hr2,m2,s2,finhr,finm,fins,t;  
    printf("請輸入起始時間：");
    scanf("%d:%d:%d", &hr1, &m1, &s1);  
    printf("請輸入結束時間：");
    scanf("%d:%d:%d", &hr2, &m2, &s2);   
    finhr = hr1-hr2;  
    finm  = m1-m2;   
    fins  = s1-s2;   
	finhr = abs(finhr);  
    finm = abs(finm);  
    fins = abs(fins);  
    t = finhr * 3600 + finm * 60 + fins;
    printf("\n兩個時間間隔秒數為: %d\n", t);
    system("pause");  
    return 0;   
}
