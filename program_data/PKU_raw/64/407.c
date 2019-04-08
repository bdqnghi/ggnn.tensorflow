struct dot
{
	int x;
	int y;
	int z;
}point[10];
int main()
{
	int n,i,j,k,l,t=0,s=0;
	float a[10][10]={0},tem,b[50]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&point[i].x,&point[i].y,&point[i].z);
		s=s+i;
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
		a[i][j]=sqrt((point[i].x-point[j].x)*(point[i].x-point[j].x)+(point[i].y-point[j].y)*(point[i].y-point[j].y)+(point[i].z-point[j].z)*(point[i].z-point[j].z));
		b[t]=a[i][j];
		t++;
		}
	for(i=0;i<s-1;i++)
		for(j=0;j<s-i-1;j++)
		{
			if(b[j]<b[j+1])
			{
				tem=b[j];
				b[j]=b[j+1];
				b[j+1]=tem;
			}
		}
	for(k=0;k<s;k++)
	{
		if(b[k]==b[k-1])
			continue;
		else
		{
		for(i=0;i<n-1;i++)
	    	for(j=i+1;j<n;j++)
			{
				if(a[i][j]==b[k])
					printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",point[i].x,point[i].y,point[i].z,point[j].x,point[j].y,point[j].z,b[k]);
			}
		}
	}
	return 0;
}





			
