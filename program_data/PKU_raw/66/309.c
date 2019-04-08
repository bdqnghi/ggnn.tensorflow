int main()
{
int a,b,c,m=0,i,j;
int t1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int t2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
scanf("%d%d%d",&a,&b,&c);
if(b>1){
if (a%4!=0||(a%100==0&&a%400!=0)){
             for(j=0;j<b-1;j++)
             m+=t1[j];
             }
             else {
             for(j=0;j<b-1;j++)
             m+=t2[j];
             }
             }
   m+=c;
   m+=a-1+(int)((a-1)/4)-(int)((a-1)/100)+(int)((a-1)/400);
   if(m%7==1) printf("Mon.");
   else if(m%7==2) printf("Tue.");
   else if(m%7==3) printf("Wed.");
   else if(m%7==4) printf("Thu.");
   else if(m%7==5) printf("Fri.");
   else if(m%7==6) printf("Sat.");
   else if(m%7==0) printf("Sun.");
   return 0;
}