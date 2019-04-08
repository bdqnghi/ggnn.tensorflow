int main()
{
	int n;
	double nan[40]={0},nv[40]={0};
	int i,j=0,k=0,p,l,x,y,z,q;
	char a[10];
	double b,c;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b;
		if(strcmp(a,"male")==0)
			nan[j++]=b;
		else
			nv[k++]=b;
	}
	for(p=0;p<j-1;p++)
	{
		for(l=0;l<j-1-p;l++)
		{
			if(nan[l]>nan[l+1])
			{
				b=nan[l];
				nan[l]=nan[l+1];
				nan[l+1]=b;
			}
		}
	}
	for(x=0;x<k-1;x++)
	{
		for(y=0;y<k-1-x;y++)
		{
			if(nv[y]<nv[y+1])
			{
				c=nv[y];
				nv[y]=nv[y+1];
				nv[y+1]=c;
			}
		}
	}
	for(z=0;z<j;z++)
		cout<<fixed<<setprecision(2)<<nan[z]<<" ";
	for(q=0;q<k-1;q++)
		cout<<fixed<<setprecision(2)<<nv[q]<<" ";
	cout<<fixed<<setprecision(2)<<nv[k-1];
	return 0;
}




