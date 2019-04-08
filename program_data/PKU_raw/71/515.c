struct date {
   int year;
   int m1;
   int m2;
};struct date date[200];
int main() 
{ 
    int f(int p,int m,int n),i,p=0;
    
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d%d%d",&date[i].year,&date[i].m1,&date[i].m2);
                    
    for(i=0;i<n;i++)   
    {            
                    if(((date[i].year%4==0&&date[i].year%100!=0)||(date[i].year%400==0) )&& (date[i].m1<=2||date[i].m2<=2)) 
 { 
  p++;
 } 
 f(p,date[i].m1,date[i].m2);
 p=0;
}
 return 0;
}
int f(int p,int m,int n)
{
    int a[13]={1,32,60,91,121,152,182,213,244,274,305,335};
    if((abs(a[m-1]-a[n-1])+p)%7==0)
    printf("YES\n");
    else
    printf("NO\n");
}