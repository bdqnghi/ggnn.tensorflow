struct dian
	{
		int a;
		int b;
		int c;
	}zb[11];
int main()
{
	
	int q,n,i,j,s=1,k1[50],k2[50],h1;
	double k[50]={0},h;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>zb[i].a>>zb[i].b>>zb[i].c;
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			k[s]=sqrt((zb[i].a-zb[j].a)*(zb[i].a-zb[j].a)+(zb[i].b-zb[j].b)*(zb[i].b-zb[j].b)+(zb[i].c-zb[j].c)*(zb[i].c-zb[j].c));
			k1[s]=i;
			k2[s]=j;
			s++;
		}
	}
	for(i=1;i<=n*(n-1)/2-1;i++)
	{
		for(j=1;j<=n*(n-1)/2-i;j++)
		{
			if(k[j]<k[j+1])
			{
				h=k[j];
				k[j]=k[j+1];
				k[j+1]=h;
				h1=k1[j];
				k1[j]=k1[j+1];
				k1[j+1]=h1;
				h1=k2[j];
				k2[j]=k2[j+1];
				k2[j+1]=h1;	
			}
		}
	}
	for(i=1;i<=n*(n-1)/2;i++)
	{
		cout<<"("<<zb[k1[i]].a<<","<<zb[k1[i]].b<<","<<zb[k1[i]].c<<")-("<<zb[k2[i]].a<<","<<zb[k2[i]].b<<","<<zb[k2[i]].c<<")=";
		printf("%.2f",k[i]);
		cout<<endl;
	}
	cin>>q;
	return 0;
}