int main()
{
    int m,n,a[82],b[82],i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<81;i++)
    {
        a[i]=0;
    }
    a[40]=m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<81;j++)
        {  
           if(j==0)
           b[j]=2*a[j]+a[j+1]+a[j+9]+a[j+10];
           if(j==8)
           b[j]=2*a[j]+a[j-1]+a[j+8]+a[j+9];
           if(j==72)
           b[j]=2*a[j]+a[j-9]+a[j-8]+a[j+1];
           if(j==80)
           b[j]=2*a[j]+a[j-10]+a[j-9]+a[j-1];
           if((j<8)&&(j>0))
           b[j]=2*a[j]+a[j-1]+a[j+1]+a[j+8]+a[j+9]+a[j+10];
           if((j<80)&&(j>72))
           b[j]=2*a[j]+a[j-10]+a[j-9]+a[j-8]+a[j-1]+a[j+1];
           if((j%9==0)&&(j!=0)&&(j!=72))
           b[j]=2*a[j]+a[j-9]+a[j-8]+a[j+1]+a[j+9]+a[j+10];
           if((j%9==8)&&(j!=8)&&(j!=80))
            b[j]=2*a[j]+a[j-10]+a[j-9]+a[j-1]+a[j+8]+a[j+9];
            if((j>9)&&(j<71)&&(j%9!=0)&&(j%9!=8))
           b[j]=2*a[j]+a[j-10]+a[j-9]+a[j-8]+a[j-1]+a[j+1]+a[j+8]+a[j+9]+a[j+10];
        }
        for(j=0;j<81;j++)
        {
           a[j]=b[j];
        }
    }
    for(i=0;i<9;i++)
    {
       for(j=0;j<8;j++)
       {
           printf("%d ",a[9*i+j]);
       }
       printf("%d\n",a[9*i+8]);
    }
    //getchar();
    //getchar();
    return 0;
} 
