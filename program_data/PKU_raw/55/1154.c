int ten(int m)
    { int z;
      if(48<=m&&m<=57)
         z=m-48;   
      else if(65<=m&&m<=90)
         z=m-55;
      else if(97<=m&&m<=122)
         z=m-87;
      return (z);
      }
    char letter(int p)
    {  int k;
       if(0<=p&&p<=9)
       k=p+48;
       else if(10<=p&&p<=26)
       k=p+55;
       return (k);
       }
int main()
{
    long int a1,b1,a[1001],b[1001],tensum=0,n,i;
    long a1_;
    cin>>a1;
    a1_=a1;
    getchar();
    for(i=1;i<=1000;i++)
    {
    a[i]=getchar();
    if(a[i]==32)
    break;
    }
    n=i-1;
    cin >>b1;
    tensum=ten(a[n]);
    for(i=n-1;i>0;i--)
    {tensum=a1_*ten(a[i])+tensum;
    a1_=a1_*a1;
    }
    i=1;
    do
    {
    b[i]=tensum%b1;
    tensum=tensum/b1;
    i++;}
    while(tensum>0);
    for(i=i-1;i>0;i--)
    putchar(letter(b[i]));
    return 0;
}

    