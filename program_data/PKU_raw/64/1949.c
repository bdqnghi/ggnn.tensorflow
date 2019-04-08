double distance(int b1[],int b2[])
{
	int X,Y,Z;
	double D;
	X=(b1[0]-b2[0])*(b1[0]-b2[0]);
	Y=(b1[1]-b2[1])*(b1[1]-b2[1]);
	Z=(b1[2]-b2[2])*(b1[2]-b2[2]);
	D=sqrt(X+Y+Z);
	return D;
}
int main()
{
	int n,i,j,r=0,p,k=0;
	int a[30],b[10][3];
	double d[100][3],temp;
	scanf("%d",&n);
	for(i=0;i<3*n;i++)
		scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	{
		b[i][0]=a[3*i];
		b[i][1]=a[3*i+1];
		b[i][2]=a[3*i+2];
	}
    for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			d[k][0]=distance(b[i],b[j]);
			d[k][1]=i;
			d[k][2]=j;
			k++;
		}

	for(i=1;i<k;i++)
		for(j=0;j<k-i;j++)
			if(d[j][0]<d[j+1][0])
			{
				temp=d[j][0];
				d[j][0]=d[j+1][0];
				d[j+1][0]=temp;
				temp=d[j][1];
				d[j][1]=d[j+1][1];
				d[j+1][1]=temp;
				temp=d[j][2];
				d[j][2]=d[j+1][2];
				d[j+1][2]=temp;

			}	
	for(p=0;p<k;p++)
	{
		i=d[p][1];
		j=d[p][2];
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",b[i][0],b[i][1],b[i][2],b[j][0],b[j][1],b[j][2],d[p][0]);
	}
    return 0;                               
}
