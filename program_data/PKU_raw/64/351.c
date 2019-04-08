double cal(int a[3],int b[3])
{
	int i=0,sum=0;
	for(;i<3;i++)
		sum+=(a[i]-b[i])*(a[i]-b[i]);
	return sqrt(sum);
}
int change(double a[7],double b[7])
{
	double temp;
	int i;
	for(i=0;i<7;i++)
	{
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	return 0;
}
void main()
{
	int i,j,n,a[10][3],k1=0,k2;
	double b[60][7];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{

			for(k2=0;k2<3;k2++)
				b[k1][k2]=a[i][k2];
			for(k2=0;k2<3;k2++)
				b[k1][k2+3]=a[j][k2];
			b[k1][6]=cal(a[i],a[j]);
			k1++;
		}
	for(i=0;i<k1;i++)
		for(j=0;j<k1-1;j++)
			if(b[j][6]<b[j+1][6])
				change(b[j],b[j+1]);
	for(i=0;i<k1;i++)
		printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",b[i][0],b[i][1],b[i][2],b[i][3],b[i][4],b[i][5],b[i][6]);


}	