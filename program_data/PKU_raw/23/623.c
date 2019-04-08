int main()
{
	char a[5000];
	cin.getline(a,5000);
	int i=0,j=0,m;
	m=strlen(a);
	for(i=m-1;i>=0;i--)
	{
		if (a[i]==' ')
		{
			j=i+1;
			while((a[j]!=' ')&&(j<m))
			{
				cout<<a[j];
				j++;
			}
			cout<<" ";
		}
		if (i==0)
		{
					j=i;
					while((a[j]!=' ')&&(j<m))
					{
						cout<<a[j];
						j++;
					}

				}
	}

	return 0;
}
