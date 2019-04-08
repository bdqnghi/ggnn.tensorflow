int main()
{
	int a[301],len,max=0,max1=0,i,j,k,l;
	char c[301];
	for(i=1;i<301;i++)
	{
		scanf("%d",&a[i]);
		scanf("%c",&c[i]);
		if(c[i]!=',')
{
		len=i;
		break;}

	}
	for(j=1;j<=len;j++)
	{
		if(a[j]>=max)
			max=a[j];
	}
	for(k=1;k<=len;k++)
	{
		if(a[k]==max)
			a[k]=0;
	}
	for(l=1;l<=len;l++)
	{
		if(a[l]>=max1)
			max1=a[l];
	}
         if(max1==0)
        printf("No\n");
else
	printf("%d\n",max1);
	return 0;
}
