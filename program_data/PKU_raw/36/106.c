int main()
{
    char a[100],b[50],c[50];
    int m,n,x,y,z,sum=0;
    gets(a);
    x=strlen(a);
    for(m=0;m<x;m++)
    {if(a[m]==' ')
    {for(n=0;n<m;n++)
    b[n]=a[n];
    b[m]='\0';
    for(n=m+1;n<x;n++)
    c[n-m-1]=a[n];
    c[x-m-1]='\0';}}
    y=strlen(b);
    z=strlen(c);
    if(y!=z)
    {printf("NO\n");
    return 0;}
    else
    {for(m=0;m<y;m++)
     {for(n=0;n<=z;n++)
      if(c[n]==b[m])
       {c[n]='0';
        b[m]='0';
        break;}
        else if(n==z)
        {printf("NO\n");
        return 0;}}
      printf("YES\n");
     }
     }