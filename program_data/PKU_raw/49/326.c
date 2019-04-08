
int main()
{
	char a[501];
	char *p,*t,*m;
	cin>>a;
	int la,i,flag=1;
	la=strlen(a);
	for(i=1;i<la;i++)
	{
		for(p=a+i;p<a+la;p++)
		{
			flag=1;
			for(t=p-i,m=p;t<=m;t++,m--)
			{
				if(*t!=*m)
				{
					flag=0;
					break;
				}
			}
			if(flag)
			{
				for(t=p-i;t<=p;t++)
					cout<<*t;
				cout<<endl;
			}
		}
	}
	return 0;
}