/*           ????
??????      2010.12.12        */
int main()
{
	int num,flag=0;
	char a[50];
	char *p;
	cin.getline(a,sizeof(a));
	a[strlen(a)]='a';
	for(p=a;p<a+strlen(a);p++)
		if(*p<='9'&&*p>='0')
		{
			if(flag)
				num=num*10+*p-'0';
			else
				num=*p-'0';
			flag=1;
		}
		else
		{
			if(flag==1)
				cout<<num<<endl;
			flag=0;
		}
	return 0;
}
	