int main()
{
	float a[20];
	do
	{
		int i=1;
	do
	{
		scanf("%d",&a[i]);
		if (a[i]==0) break;
		else i++;}while (i<=19);
	int j,k;
	float t;
	for (j=1;j<=i-2;j++)
		for (k=1;k<=i-1-j;k++)
	        if(a[k]>a[k+1])
			{t=a[k];a[k]=a[k+1];a[k+1]=t;}
	int s=0,l,m;
	for (l=1;l<=i-2;l++)
		for (m=1;m<=i-1;m++)
			if(a[m]/a[l]==2) 
				s=s+1;
	if (a[1]>0)
	printf("%d\n",s);
	}while (a[1]>0);
    return 0;
}
