int main()
{
char a[100],*p; 
gets(a);  //?????
p=a;
if(*p>=48&&*p<=57)
cout<<*p;
p++;
while(p-a<=strlen(a))
{
if(*p>=48&&*p<=57)  //???????????
	{
		cout<<*p;
	}
else if(*(p-1)>=48&&*(p-1)<=57)  //??????????
	{
		cout <<endl;
	}
	p++;
}
return 0;
}
