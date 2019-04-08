int main(int argc, char* argv[])
{
	int a[max];
	int	b[4]={0};
	int i,m;
	float c[4];
	scanf("%d",&m);          //0=<m<=100//
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);    
	 if(a[i]>=1 && a[i]<=18)
          b[0]++;
	else if(a[i]>=19 && a[i]<=35)
		  b[1]++;
	else if(a[i]>=36 && a[i]<=60)
	      b[2]++;
	else if(a[i]>60)
          b[3]++;
	}
	for(i=0;i<4;i++)
	{
		c[i]=b[i]*1.0/m*1.0*100;
	}
    printf("1-18: %.2f%%\n",c[0]);
	printf("19-35: %.2f%%\n",c[1]);
    printf("36-60: %.2f%%\n",c[2]);
	printf("60??: %.2f%%",c[3]);
	return 0;
}