main()
{
    int i,j,x,y,z;
    char a[256],b[50],c[50];
    gets(a);
    gets(b);
    gets(c);
    x=strlen(a);
    y=strlen(b);
    z=strlen(c);
    for(i=0;i<=x-y;i++)
    {
        for(j=i;j<i+y;j++)
        {                 
        if(a[j]!=b[j-i])
        break;
        } 
        if(j==i+y)
        {for(j=0;j<i;j++)
        {printf("%c",a[j]);}
        for(j=0;j<z;j++)
        {printf("%c",c[j]);}
        for(j=i+y;j<x;j++)
        {printf("%c",a[j]);}
        break;}      
    }
    if(i==x-y+1)
      { puts(a);}    
    getchar();getchar();getchar();getchar();getchar();    
}
