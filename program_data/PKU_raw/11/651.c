int main()
{
   int sum=0,year,month,day,a[32],i,n;
   scanf("%d%d%d",&year,&month,&day);
   a[0]=0;
   a[1]=31;
   a[3]=31;
   a[4]=30;
   a[5]=31;
   a[6]=30;
   a[7]=31;
   a[8]=31;
   a[9]=30;
   a[10]=31;
   a[11]=30;
   a[12]=31;
    if(year%4==0&&year%200==0){a[2]=29;}
    else
    {a[2]=28;
    }
    for(i=0;i<month;i++)
    {
    	sum=sum+a[i];
    }
    n=sum+day;
    printf("%d",n);
    return 0;
}