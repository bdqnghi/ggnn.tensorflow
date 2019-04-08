int main()
{
	char a[100],b[100];
	cin.getline(a,100);
	int n;
	n = strlen(a);
	int flag = 0;
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!=' ')
		{
                           flag =0;
			b[j] = a[i];
			j++;
		}
		if((a[i]==' ')&&(flag==0))
		{
			b[j] = a[i];
			j++;
			flag = 1;
		}
		else
			continue;
	}
	int m;
	m = j;
	for(j=0;j<m;j++)
		cout<<b[j];
	return 0;
}