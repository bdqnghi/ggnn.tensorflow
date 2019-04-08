
int main()
{
	int t=0,n,i,j,*p1,*p2,a[100]={'\0'},b[100]={'\0'};
	p1=a;p2=b;
	cin>>n;
	for (i=0;i<n;i++)
		cin>>*(p1+i);
	for (i=0;i<n;i++)
		for (j=0;j<=i;j++)
		{
			if (j==i)
			{
				*p2=*(p1+i);
				p2++;
				t++;
			}
			if (*(p1+i)!=*(p1+j))
				continue;
			if (*(p1+i)==*(p1+j))
				break;
		}
	p2=b;
	for (i=0;i<t-1;i++)
		cout<<*(p2+i)<<',';
	cout<<*(p2+t-1);
	return 0;
}

