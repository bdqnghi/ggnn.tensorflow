int main ()
{
	char c[200],p,q;
	int i,j,k,n,a[100],b[100];
	while(cin>>c)
	{
	n=strlen(c);
	k=0;
	p=c[0];
	q=c[n-1];
	for(i=0;c[i]!='\0';i++)
		if(c[i]==q)
			for(j=i-1;j>=0;j--)
			{
				if(c[j]!=p&&c[j]!=q)
					continue;
				else if(c[j]==p)
				{
					a[k]=j;
					b[k]=i;
					c[i]='o';
					c[j]='o';
					k++;
					break;
				}
				else if(c[j]=='(')
					break;
			}
	for(i=0;i<k;i++)
		cout<<a[i]<<" "<<b[i]<<endl;
	}
	return 0;
}