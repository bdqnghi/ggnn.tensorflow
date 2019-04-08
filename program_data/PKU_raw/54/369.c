int main()
{
     int n,m,k;
     scanf("%d %d",&n,&k);
     if(n>2)
     {
        m=(int)pow(n,n)-(n-1)*k;
     }
     else
     {
        m=7;
     }
     printf("%d\n",m);
     return 0;
}
