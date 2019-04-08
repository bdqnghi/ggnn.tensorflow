int main ()
{
	int i,j=0,k,l,b[20];
	char a[101];
	cin.get(a,101,'\n');
	for(i=0;i<101;i++)
	{
		if(a[i]==32)
		{
			b[j]=i;
			j++;
		}
		if(a[i]=='\0')
			break;
	}
	l=i;
	k=j;
	if(k!=0)
	{
		for(i=b[k-1]+1;i<l;i++)
			cout<<a[i];
		for(j=k-2;j>=0;j--)
		{
			cout<<" ";
			for(i=b[j]+1;i<b[j+1];i++)
				cout<<a[i];
		}
		cout<<" ";
		for(i=0;i<b[0];i++)
			cout<<a[i];
	}
	if(k==0)
		cout<<a;
	return 0;
}