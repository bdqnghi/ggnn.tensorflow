int main()
{	
	char b[101],a[101][101];
	cin.getline(b,101);
	a[0][0]=b[0];
	int k=1,i=0,j=1;
	while(b[k]!='\0')
	{
		if(b[k]!=' ')
			a[i][j++]=b[k];
		else
		{
			if(b[k]==' '&&b[k+1]!=' ')
				{
					a[i][j]='\0';
					i++;
					j=0;
				}
		}
		k++;
	}
	int t;
	for(t=0;t<i;t++)
		cout<<a[t]<<" ";
	cout<<a[i]<<endl;
	return 0;
}