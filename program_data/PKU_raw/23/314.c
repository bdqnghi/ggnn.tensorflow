int main()
{
	int a[100]={0},i,j=1,m,n;
	char ch[100]={'\0'};
	for(i=1;i<100;i++)
	{
		ch[i]=cin.get();
		if(ch[i]==' ')
		{
			a[j]=i;
			j++;
		}
		if(ch[i]=='\n')
		{
			a[j]=i;
			m=i;
			n=j;
			break;
		}
	}
	for(j=n-1;j>=0;j--)
	{
		for(i=a[j]+1;i<a[j+1];i++)
			cout<<ch[i];
		if(j!=0)
			cout<<" ";
	}
	return 0;
}