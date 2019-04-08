void main()
{
	int n,a[10][3],b[45][2],i,j,k=0,t;
	float c[45],s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i][0]);
		scanf("%d",&a[i][1]);
		scanf("%d",&a[i][2]);
	}
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			b[k][0]=i;
			b[k][1]=j;
			c[k]=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]));
			k++;
		}
	for(j=0;j<k-1;j++)
		for(i=0;i<k-1-j;i++)
		{
			if(c[i]<c[i+1])
			{
				s=c[i];
				c[i]=c[i+1];
				c[i+1]=s;
				t=b[i][0];
				b[i][0]=b[i+1][0];
				b[i+1][0]=t;
                t=b[i][1];
				b[i][1]=b[i+1][1];
				b[i+1][1]=t;
			}
		}
	for(i=0;i<k;i++) printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[b[i][0]][0],a[b[i][0]][1],a[b[i][0]][2],a[b[i][1]][0],a[b[i][1]][1],a[b[i][1]][2],c[i]);
}
