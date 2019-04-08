int main()
{
char c[1000];
gets(c);
int i,n,j,t=0;
n=strlen(c);
for(i=t;i<n;i++)
{
if((c[i]>='0')&&(c[i]<='9'))
cout<<c[i];
else
{
for(j=i;j<n;)
{
if((c[j]>='0')&&(c[j]<='9'))
{
cout<<endl;
t=j-1;
j=n;
}
else
j=j+1;
}
}
}
return 0;
}