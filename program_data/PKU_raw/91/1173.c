int main()
{
    int l,i;
    char a[1000]={0},b[1000]={0};
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
       {b[i]=a[i]+a[(i+1)%l];
       printf("%c",b[i]);}
return 0;
}