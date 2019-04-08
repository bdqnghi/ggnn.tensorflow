void fy()
{
    int t=0,n,i,a[100];
    scanf("%d",&n);
    if(n==0)
    printf("60\n");
    else{
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
       if(i*3+a[i]>=60)
       {
           printf("%d\n",60-i*3);
           break;
       }
       if(a[i]+i*3+3>=60)
       {
           printf("%d\n",a[i]);
           break;
       }
    }
    if(i==n)
    printf("%d\n",60-i*3);
    }
}
void main()
{
   int n;
   scanf("%d",&n);
   while(n)
   {
       fy();
       n--;
    }
}