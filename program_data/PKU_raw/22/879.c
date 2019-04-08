int main ()
{
    int a,b,max,min,n,s=0;
    char c;
    scanf("%d%c",&a,&c);
    if (c=='\n')
    printf("No");
    else
    {  scanf("%d%c",&b,&c);
    if (a>b)
    {max=a;
    min=b;
    s=1;}
    else if (a<b)
    {max=b;
    min=a;
    s=1;}
    else 
    {max=a;
    min=b;
    s=0;}
    for (;c==',';)
    {
             scanf("%d%c",&n,&c);
             if (n!=a||n!=b)
             s=1;
              if (n>min&&n<max)
               min=n;
              else if (n>max)
               {min=max;
               max=n;}
               else if (n<min&&min==max)
               min=n;
    }

    if (s==0)
    printf("No");
    else
    printf("%d",min);}
       return 0;
}
