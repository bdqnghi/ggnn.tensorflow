int main()
{
char a[31];
char *p=a;
cin.getline(a,31);
for(;*p!='\0';p++)
if(*p>=48&&*p<=58)
{
cout<<*p;
if(*(p+1)<48||*(p+1)>58)cout<<endl;
}
return 0;
}