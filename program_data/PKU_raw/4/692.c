int main()
{
    long t,m,r,l,i,x,j,a[1000][1000]={0},b[1000]={0};
    scanf("%ld%ld",&r,&l);
    for(i=1;i<=r;i++)
       for(j=1;j<=l;j++)
          {scanf("%ld",&x);
           a[i+j][b[i+j]]=x;
           b[i+j]++;  
                     }
           i=i-1;
           j=j-1;
    for(t=2;t<=i+j;t++)
       {for(m=0;m<b[t];m++)
          { printf("%ld\n",a[t][m]);}
                                     }
    return 0;
}