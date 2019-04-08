int main()
{
	char a[35];
	char *p;
	cin.getline(a,35);
	for(p=a;p<(a+strlen(a));p++)
	{if((48<=*p)&&(*p<=57)) cout<<*p;  
	else  
	{if((48<=*(p+1))&&(*(p+1)<=57)) cout<<endl;  
	else continue;
	}}
	return 0;
}
