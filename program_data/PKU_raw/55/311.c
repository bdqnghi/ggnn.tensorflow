int main(int argc, char *argv[])
{
  
    int a[256],i;
    for (i='0';i<='9';i++)
        a[i]=i-'0';
    for (i='a';i<='z';i++)
        a[i]=i-'a'+10;
    for (i='A';i<='Z';i++)
        a[i]=i-'A'+10;
    char s[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  
    int n,m;
    char b[100],c[100];
    scanf ("%d%s%d",&n,b,&m);
    int sum=0,q,j;
    q=strlen(b);
    for (i=0;b[i]!='\0';i++)
    {
        sum=sum+a[b[i]]*pow(n,q-1-i);
    }
    if (sum==0)
    printf ("0");
    else 
    {
    for (i=0;sum>0;i++)
    {
        c[i]=s[sum%m];
        sum=sum/m;
        c[i+1]='\0';
    }
}
    q=strlen (c);
    for ( j=q-1;j>=0;j--)
    printf ("%c",c[j]);
    scanf ("%d",&i);
    return 0;
}
