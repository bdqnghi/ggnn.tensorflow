char a[33];
int main()
{
char *p;
p=&a[0];
int flag=0;
cin.getline(a,32);
while(1)
{
if(*p<='9'&&*p>='0')
{
flag=0;
cout<<*p;
p++;
}
else if(flag==0)
{
cout<<endl;
flag=1;
p++;
}
else p++;
}
}