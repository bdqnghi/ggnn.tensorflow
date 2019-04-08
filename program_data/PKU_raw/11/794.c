int main()
{
    int test(int n);
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int y,m,d,s,i;
    scanf("%d%d%d",&y,&m,&d);
    if(test(y)==1)//??? 
    {
       s=d;
       for(i=0;i<m;i++)
       s=s+b[i];
    }
    else
    {
       s=d;
       for(i=0;i<m;i++)
       s=s+a[i];
    }
    printf("%d",s);
    getchar();
    getchar();
}
int test(int n)
{
    if(n%400==0)n=1;
    else
       if(n%100!=0&&n%4==0)
       n=1;
       else  n=0;
       return(n);
}  
