void main()
{
	int n,i,j,k,l=0;
	float a[100],b[100],c[100],max;
	scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
		scanf("%f%f",&a[i],&b[i]);
	for(j=0;j<=(n-2);j++)
		for(k=(j+1);k<=(n-1);k++)
		{
			c[l]=(a[k]-a[j])*(a[k]-a[j])+(b[k]-b[j])*(b[k]-b[j]);
		    l++;
		}
		max=c[0];
		for(i=1;i<=(l-1);i++)
		if(c[i]>max)
		        max=c[i];
		printf("%.4f\n",sqrt(max));
}