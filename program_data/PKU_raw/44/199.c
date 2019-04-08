main()
{
     int a[6],l;
     int reverse(int num);
     for(l=0;l<6;l++)
     {
     scanf("%d",&a[l]); 
     printf("%d\n",reverse(a[l]));
     }
}

int reverse(int num)
{
    int i,b[5]={0},c=0,k;
    for(i=0;num!=0;i++)
    {
             b[i]=num%10;
             num=num/10;
    } 
    i--;  
    for(k=0;k<=i;k++)
    {
         c=c*10+b[k];
         
    }
    return(c);
} 
