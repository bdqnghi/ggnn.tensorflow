int main()
{
	char a[101],b[101];
	int i;
	cin.getline(a,101,'\n');
	int la,t=1,k=0;
	la=strlen(a);
	for(i=0;i<la;i++)
	{
		if(a[i]!=' ') 
		{
			t=0;
			b[k]=a[i];
			k++;
		}
		else 
		{
			if(t==0)
			{
				t=1;
				b[k]=a[i];
				k++;
			}
		}
	}
	b[k+1]='\0';
	for(i=0;i<=k-1;i++)
		cout<<b[i];
	cout<<endl;
	return 0;
}