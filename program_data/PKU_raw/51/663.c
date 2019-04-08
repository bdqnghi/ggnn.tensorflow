char a[502], b[502][6], c[502];
int main()
{
	int n, j, i, m;
	char *p=a, (*q)[6]=b, *r=c;
	cin>>n;
	cin>>a;
	int len=strlen (a);
	for(i=0; i<=len-n; i++)
		for(j=0; j<n; j++)
			q[i][j]=*(p+i+j);

	for(i=0; i<=len-n; i++)
		for(j=i+1; j<=len-n; j++)
			if(strcmp(q[i] , q[j])==0)
				r[i]++;

	int max=c[0];
	for(i=0; i<=len-n; i++)
		if(max<r[i])
			max=r[i];

	if(max<=0)
		cout<<"NO";

	else{
			cout<<max+1<<endl;
			for(i=0; i<len-n; i++)
				if(r[i]==max)
					cout<<q[i]<<endl;
		}
	return 0;
}