int l=0;
int main()
{
	int i;
	int count=0;
	char c[100]={"\0"};
	int out(char c[]);
	cin.getline(c,100);
	for (i=0;c[i]!='\0';i++)
		count++;
	l=count;
	out(c);
	return 0;
}
int out(char c[])
{
	int count=0;
	int i,j;
	for (i=0;c[i]!='\0';i++)
		count++;
    if (l==0)
		return 0;	
	else
	for (i=0;i<count;i++)
	{
		if (c[i]==c[count-1])
		{
			for (j=i-1;j>=0;j--)
			{
				if (c[j]=='1')
					continue;
				if (c[j]==c[count-1])
				{	
					break;
				}
				if (c[j]==c[0])
				{
					cout<<j<<' '<<i<<endl;
					c[i]='1';
					c[j]='1';
					l=l-2;
					break;
				}
			}
		}
	}
	out(c);
}