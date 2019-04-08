void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
	
void main()
{
	int a[10][3],n,i,j,k=0,b[50][10],N;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b[k][0]=a[i][0];
			b[k][1]=a[i][1];
			b[k][2]=a[i][2];
			b[k][3]=a[j][0];
			b[k][4]=a[j][1];
			b[k][5]=a[j][2];
			b[k++][6]=(a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]);
		}
	}
	N=k;
	for(i=1;i<N;i++)
	{
		for(j=0;j<N-i;j++)
		{
			if(b[j][6]<b[j+1][6])
			{
				swap(&b[j][0],&b[j+1][0]);
				swap(&b[j][1],&b[j+1][1]);
				swap(&b[j][2],&b[j+1][2]);
				swap(&b[j][3],&b[j+1][3]);
				swap(&b[j][4],&b[j+1][4]);
				swap(&b[j][5],&b[j+1][5]);
				swap(&b[j][6],&b[j+1][6]);
			}
		}
	}
	for(i=0;i<N;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",b[i][0],b[i][1],b[i][2],b[i][3],b[i][4],b[i][5],sqrt(b[i][6]));
}

