int main()
{
    int n;
    scanf("%d",&n);
    while(n!=1)
    { if(n%2==0)
   { n=n/2;
    printf("%d/2=%d\n",2*n,n);
    if(n==1)
    break;}
    if(n%2!=0)
   { printf("%d*3+1=%d\n",n,3*n+1);
    n=n*3+1;
    if(n==1)
    break;}
}printf("End");
getchar();
getchar();
return 0;
}
