
int main(int argc, char* argv[])
{
	float a[100][2],max,distance,b,c,d,e;
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f%f",&a[i][0],&a[i][1]);
	}
	max=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			e=a[i][0]-a[j][0];
			c=pow(e,2);
			d=pow((a[i][1]-a[j][1]),2);
			b=c+d;
			distance=sqrt(b);
			if(max<distance)
				max=distance;
		}
	}
	printf("%.4f",max);
	return 0;
}