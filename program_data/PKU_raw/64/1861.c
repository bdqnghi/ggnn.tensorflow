int main (){
	int n,i,j,a[10][3],b[100][3],c[100][3],k=0,e[100];
	double d[100],l[100],x=0,m[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&(a[i][j]));
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			d[k]=sqrt(1.0*((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2])));
			b[k][0]=a[i][0];
			b[k][1]=a[i][1];
			b[k][2]=a[i][2];
			c[k][0]=a[j][0];
			c[k][1]=a[j][1];
			c[k][2]=a[j][2];
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		l[i]=d[i];
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(l[j]>x)
			{
				x=l[j];
				e[i]=j;
			}
		}
		l[e[i]]=0;
		x=0;
	}
	for(i=0;i<k;i++)
	{
		m[i]=d[e[i]];
	}


		
	for(i=0;i<k;i++)
	{
	     printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",b[e[i]][0],b[e[i]][1],b[e[i]][2],c[e[i]][0],c[e[i]][1],c[e[i]][2],m[i]);
	}

	return 0;
}