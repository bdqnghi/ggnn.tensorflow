int main()
{
    int w,n,i,sum;
    int a[13];
    a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
    a[4]=a[6]=a[9]=a[11]=30;
    a[2]=28;
    scanf("%d",&w);
    sum=0;
    if((12+w)%7==5)
       printf("1\n");
    for(i=1;i<12;i++)
    {
       sum+=a[i];
       if((sum+12+w)%7==5)
          printf("%d\n",i+1);
    }
}
