int main()
{
	char a[100];//????????...
	cin.getline(a,101);
	int na,i,j;
	for(i=0;i<=100;i++)//??????????
	{
		if(a[i]=='\0')
		{
			na=i;
		}
	}
	for(i=0;i<=na;i++)//??????...
	{
		if(a[i]==' ' && a[i+1]==' ')
		{
			for(j=i;j<=na-1;j++)
			{
				a[j]=a[j+1];
			}
			na=na-1;
			i=i-1;

		}
	}

	cout << a;
	return 0;
}
		
