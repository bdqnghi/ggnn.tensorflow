int main()
{
    long int a;
    int x[5],i,j=0,n,m,y;
    scanf("%ld",&a);
    while(a>0)
         {x[j]=a%10;
          j++;
          a=a/10;
         }
    for(i=0;i<j;i++)
    printf("%d",x[i]);
}
