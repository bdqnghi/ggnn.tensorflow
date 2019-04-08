char a[101],x,y;int len;
void find(int t)
{
	int j;
	if(t==2)
	{
		for(int i=0;i<len;i++)
		{
			if(a[i]==x)
				cout<<i;
			else if(a[i]==y)
				cout<<' '<<i<<endl;
		}
	}
	else if(t>2)
	{
		for(int i=0;i<len-1;i++)
			if(a[i]==x)
			{
			    j=1;
				while((i+j<len)&&(a[i+j]==' '))
					j++;
				if(a[i+j]==y)
					{
						cout<<i<<' '<<i+j<<endl;
						a[i]=' ';
						a[i+j]=' ';
						find(t-2);
						return;
				    }
			}
	}
return;
}
int main()
{
	int i;
	cin>>a;
	len=strlen(a);
	x=a[0];
	for(i=1;i<len;i++)
		if(a[i]!=x)
		{
			y=a[i];
			break;
		}
	find(len);
return 0;
}