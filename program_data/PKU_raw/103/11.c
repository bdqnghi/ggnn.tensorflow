int main()
{
    char a[1001];
    gets(a);
    int t=1;
    int l=strlen(a);
    for(int j=1;j<=l;j++)
    {
       if(a[j]!=a[j-1] && a[j]-a[j-1]!= 'A'-'a' && a[j]-a[j-1]!= 'a'-'A')
       {
             if(a[j-1]>='a')
                  a[j-1]=a[j-1]+'Z'-'z';
             printf("(%c,%d)",a[j-1],t);
             t=1;
       }
       else
       t++;
    }
}