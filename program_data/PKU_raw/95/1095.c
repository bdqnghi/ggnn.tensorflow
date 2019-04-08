int main()
{
    char a[80],b[80],i,j;
    gets(a);
    gets(b);
    for(i=0;i<80;i++)
    {
     if(a[i]>=65&&a[i]<=90)
     a[i]=a[i]+32;
     if(b[i]>=65&&b[i]<=90)
     b[i]=b[i]+32;
     }
    j=strcmp(a,b);
    switch(j)
    {
     case 1:printf(">\n");break;
     case 0:printf("=\n");break;
     case -1:printf("<\n");break;
     }
}
