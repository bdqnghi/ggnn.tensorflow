int main()
{
	int a[10][3],i,j,k,n,t=0,b[45],c[45],q,m;
	float d[45],p,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(k=i+1;k<n;k++)
		{
			s=(a[i][0]-a[k][0])*(a[i][0]-a[k][0])+(a[i][1]-a[k][1])*(a[i][1]-a[k][1])+(a[i][2]-a[k][2])*(a[i][2]-a[k][2]);
			d[t]=sqrt(s);
			b[t]=i;c[t]=k;
			t++;
		}
	}
	for(i=t-1;i>0;i--)
	{
		for(j=t-1;j>t-i-1;j--)
		{
				if(d[j]>d[j-1])
			{
				p=d[j];
				d[j]=d[j-1];
				d[j-1]=p;
				q=b[j];
				b[j]=b[j-1];
				b[j-1]=q;
				q=c[j];
				c[j]=c[j-1];
				c[j-1]=q;
			}
			else;
		}
	}
	for(m=0;m<t;m++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[b[m]][0],a[b[m]][1],a[b[m]][2],a[c[m]][0],a[c[m]][1],a[c[m]][2],d[m]);


	return 0;
}