int main()
{
	int i,j,k;
	char a[10000];
	cin.getline(a,10000);
	for(i=0;i<strlen(a)-1;i++)
	{
		if(a[i]==' '&&a[i+1]==' ')
		{
			k=0;
			for(j=i;j<strlen(a);j++)
			{
				if(a[j]==' ')
				{
					k=k+1;
				}
				else
				{
					i=i+k-1;
					cout<<' ';
					break;
				}
			}
		}
		else
		{
			cout<<a[i];
		}
	}
	cout<<a[strlen(a)-1]<<endl;
	return 0;
}