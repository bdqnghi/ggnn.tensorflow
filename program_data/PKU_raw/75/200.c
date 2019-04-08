int main()
{
	char a[100000],b[100000];
	int count[1000]={0},i,c[1000],d[1000],k=0,m=0,max=0,j,ii;
	cin.getline(a,100000);
	cin.getline(b,100000);
	c[k++]=atoi(a);
	d[m++]=atoi(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==',')
			c[k++]=atoi(a+i+1);
	}
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==',')
			d[m++]=atoi(b+i+1);
	}
	for(i=0;i<k;i++)
	{
		for(j=c[i];j<d[i];j++)
		{
			count[j]++;
		}
	}
	for(i=0;i<1000;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
			ii=i;
		}
	}
	cout<<k<<" "<<max;
	return 0;
}