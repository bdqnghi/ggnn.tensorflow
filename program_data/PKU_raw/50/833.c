void main()
{
    int w,a[12]={12,31,28,31,30,31,30,31,31,30,31,30},b,c,i=0;
    scanf("%d",&w); 
    while(i<=11)
    {
       b=a[i]%7+w;
       c=b%7;  
    if  (c==5)
    {printf("%d\n",i+1);i=i+1;a[i]=a[i]+a[i-1];}
    else {i=i+1;a[i]=a[i]+a[i-1];}         
    }
    
}