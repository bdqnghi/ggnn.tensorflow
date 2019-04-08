int main()
{
	int N,i,k,j=0,m,t,l;
	int a[500];//????
	int b[500];//????
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>a[i];
        if(a[i]%2==1)//??
		{
			b[j++]=a[i];
		}
	}
	for(m=0;m<j-1;m++)//????
	{
		for(k=0;k<j-1-m;k++)
		{
			if(b[k]>b[k+1])
			{
				t=b[k];
				b[k]=b[k+1];
				b[k+1]=t;
			}
		}
	}
			for(l=0;l<j-1;l++)
			{
				cout<<b[l]<<",";//??
			}
			cout<<b[j-1]<<endl;
	getchar();
	getchar();
	return 0;
}