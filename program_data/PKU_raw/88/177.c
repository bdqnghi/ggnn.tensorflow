int main()
{
	char a[31]; gets(a);
	int l; l=strlen(a);
	int i,j,k;
	for (i=0;i<l;i++)
	{
		if (a[i]>'0'&&a[i]<='9')
		{
			for (j=i+1;j<l;j++)
				if (a[j]>'9'||a[j]<'0')
					break;
			for (k=i;k<j;k++)
				cout<<a[k];
			i=j; cout<<endl;
		}
		else if (a[i]=='0')
			{
			for (j=i+1;j<l;j++)
				if (a[j]!='0')
					break;
			i=j-1; cout<<'0'<<endl;
			}
	}
	return 0;
}
