void main()
{
	int n,m,a[99],b[99],i=0,j,k,s,c[310],x,remain;
	scanf("%d %d",&a[0],&b[0]);
	while(a[i]!=0&&b[i]!=0)
	{
		i++;
		scanf("%d %d",&a[i],&b[i]);
	}
	s=i;
	for(i=0;i<s;i++)
	{
		n=a[i],m=b[i],remain=0;
		for(j=1;j<=n;j++) c[j]=j;
		for(j=0;j<a[i]-1;j++)
		{
			if((remain+m)%n==0) {n--;remain=0;}
			else
			{
				for(k=(remain+m)%n;k<n;k++)
					c[k]=c[k+1];
				remain=(remain+m)%n-1;
				n--;
			}
		}
		printf("%d\n",c[1]);
	}
}








		



