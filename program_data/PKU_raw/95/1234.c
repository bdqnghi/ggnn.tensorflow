void main()
{
char a[1000],b[1000],i,j,k,l1,l2;
gets(a);
gets(b);
l1=strlen(a);
l2=strlen(b);
if(l1>=l2)
{
    for(i=0;i<l2;i++)
    {
        if(a[i]>='a'&&a[i]<='z')  a[i]=a[i]-'a'+'A';
        if(b[i]>='a'&&a[i]<='z')  b[i]=b[i]-'a'+'A';
        if(a[i]>b[i])    {printf(">");break;}
        else if(a[i]<b[i])   {printf("<");break;}
    }
    if(l1==l2 &&i==l2)    printf("=");
}
else
{
   for(i=0;i<l1;i++)
    {
        if(a[i]>='a'&&a[i]<='z')  a[i]=a[i]-'a'+'A';
        if(b[i]>='a'&&a[i]<='z')  b[i]=b[i]-'a'+'A';
        if(a[i]>b[i])    {printf(">");break;}
        else if(a[i]<b[i])   {printf("<");break;}
    }
}













}
