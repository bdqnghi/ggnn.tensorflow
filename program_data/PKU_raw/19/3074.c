int main()
{
	int i=0,j=0,n,t[100],at,bt,p;
	char s[100][100],a[100],b[100];
	for(i=0;i<100;i++)
	{
		
		for(j=0;j<100;j++)
		{
			s[i][j]=cin.get();
			if(s[i][j]==' ')
			{
				t[i]=j;
				break;
			}
			else
				if(s[i][j]=='\n')
				{
					t[i]=j;
					goto loop;
				}
		}
	}
loop: n=i+1;
	for(j=0;j<100;j++)
	{
		a[j]=cin.get();
		if(a[j]=='\n')
		{
			at=j;
			break;
		}
	}
	for(j=0;j<100;j++)
	{
		b[j]=cin.get();
		if(b[j]=='\n')
		{
			bt=j;
			break;
		}
	}
	for(i=0;i<n;i++)
		if(t[i]==at)
		{
			p=1;
			for(j=0;j<at-1;j++)
			{
				p*=s[i][j]-a[j]+1;
			}
				if(p==1)
				{
					for(j=0;j<bt;j++)
						s[i][j]=b[j];
					t[i]=bt;
				}
		}
	for(i=0;i<n;i++)
	{
		if(i==0)
			for(j=0;j<t[i];j++)
				cout<<s[i][j];
		else
		{
			cout<<" ";
			for(j=0;j<t[i];j++)
				cout<<s[i][j];
		}
	}
	cout<<endl;
	return 0;
}