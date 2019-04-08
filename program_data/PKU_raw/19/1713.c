int main()
{
	char s[100][100]={"\0"},a[100]={"\0"},b[100]={"\0"};  //???????
	int i,j,x=0;
	for (i=0;i<100;i++)
	{
		for (j=0;j<100;j++)
		{
			cin.get(s[i][j]);
			if (s[i][j]==32)
			{
				s[i][j]=0;
				j=100;
			}
			else if (s[i][j]==10)
			{
				s[i][j]=0;
				j=i=100;
			}
		}
	}                                                     //?????????????
	for (j=0;j<100;j++)
	{
		cin.get(a[j]);
		if (a[j]==32||a[j]==10)
		{
			a[j]=0;
			break;
		}
	}                                                     //????????a
	for (j=0;j<100;j++)
	{
		cin.get(b[j]);
		if (b[j]==32||b[j]==10)
		{
			b[j]=0;
			break;
		}
	}                                                     //????????b
	for (i=0;i<100;i++)
	{
		for (j=0;j<100;j++)
		{
			if (a[j]==s[i][j])
				x=x+1;
		}
		if (x==100)
			for (j=0;j<100;j++)
				s[i][j]=b[j];
		else
			x=0;
	}                                                     //????
	for (i=0;i<100;i++)
	{
		for (j=0;j<100;j++)
		{
			if (s[i][j]!=0&&s[i][j+1]==0&&s[i+1][0]!=0)
				cout<<s[i][j]<<" ";
			else if (s[i][j]!=0)
				cout<<s[i][j];
		}
	}                                                     //????
	return 0;
}