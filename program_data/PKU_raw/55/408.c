
int main()
{
int temp,b[500];
int n,m,i,j;
long lala=0;
cin>>n;
scanf(" %1c",&i);
while((i>=48&&i<=57)||(i>=65&&i<=90)||(i>=97&&i<=122))
{
    if (i>=48&&i<=57) temp=i-48;
    if (i>=65&&i<=90) temp=i-55;
    if (i>=97&&i<=122) temp=i-87;
    lala=lala*n+temp;
    scanf("%1c",&i);
}

cin>>m;
int c=0;
while(lala>=m)
{
             b[c]=lala%m;
             lala=lala/m;
             c++;
}
b[c]=lala;
for(i=c;i>=0;i--) if (b[i]<10) cout<<b[i]; else printf("%c",b[i]+55);

}
