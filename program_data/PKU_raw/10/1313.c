
int k,n[25],h[25];

int main()
{
    cin>>k;
	int i,j;
	for(i=0;i<k;i++)
		cin>>h[i];
	memset(n,sizeof(n),0);
	int tem=0;
	for(i=0;i<k;i++)
	{
		tem=0;
       for(j=0;j<i;j++)
	   {
		   if(h[j]>=h[i])
		   {
			   if(n[j]>tem)
				   tem=n[j];
		   }
	   }
	   n[i]=1+tem;
	}
	tem=0;
	for(i=0;i<k;i++)
	{
		if(n[i]>tem)
			tem=n[i];
	}
	cout<<tem<<endl;
	return 0;
}