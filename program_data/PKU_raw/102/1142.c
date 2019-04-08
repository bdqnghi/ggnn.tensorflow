int main(){
	int n,i,j=0,k=0,x,y,q[40];
	double c[40],d[40],e[40],z;
	char b[40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %lf",&b,&c[i]);
		if(strcmp(b,"male")==0)
		{
			q[i]=1;
		}
		else
		{
			q[i]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		if(q[i]==1)
		{
			d[j]=c[i];
			j++;
		}
		if(q[i]==0)
		{
			e[k]=c[i];
			k++;
		}
	}
	for(i=0;i<j;i++)
	{
		for(x=i+1;x<j;x++)
		{
			if(d[x]<d[i])
			{
				z=d[i];
				d[i]=d[x];
				d[x]=z;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		for(x=i+1;x<k;x++)
		{
			if(e[x]>e[i])
			{
				z=e[i];
				e[i]=e[x];
				e[x]=z;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%.2lf ",d[i]);
	}
	for(i=0;i<k-1;i++)
	{
		printf("%.2lf ",e[i]);
	}
	printf("%.2lf",e[k-1]);


	return 0;
}
