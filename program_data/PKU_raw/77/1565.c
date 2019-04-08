
int a[100];
int n;    //:n???????n1??????
int n1;
int main()
{
	void digui(int);
	char str[100];
	cin>>str;
	n=strlen(str);
	n1=n;

	for (int i1=0;str[i1]!='\0';i1++)
	{
		if ( str[i1]==str[0])   //:????1?????0?????-1
			a[i1]=1; 
		else a[i1]=0;
	}

	digui(n);  //:?n??????
	return 0;
}


void digui(int n)
{
	int count=0;
	int t=0;
	if ( n==2)  //:??2?????????
	{
		for (int i=0;i<n1;i++)
		{
			if ( a[i]!=-1 && count==0)
			{
				cout<<i<<" ";
				count++;
				a[i]=-1;
			}
			else if (a[i]!=-1 && count>0)
			{
				cout<<i;
				count++;
				a[i]=-1;
			}
		}
		cout<<endl;
	}

	else if (n>2)  //:?????????????????????????-1
	{
		for (int i=0;i<n1-1;i++)
		{
			if ( a[i]==1)
			{
				for (int j=i+1;j<n1;j++)
				{
					if (a[j]==-1)
						continue;
					else if ( a[j]==1)
						break;
					else if ( a[j]==0)
					{
						cout<<i<<" "<<j<<endl;
						a[i]=-1;
						a[j]=-1;
						digui(n-2);   //:????2??????????
					}
				}
			}
		}
	}
}
			



