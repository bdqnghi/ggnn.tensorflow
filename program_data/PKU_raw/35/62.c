void main()
{
	int n,m,i,j,k,a[10][10],t=0,q,qq,p=1,max;
	char s[3];
	scanf("%s",s);
	n=s[0]-48;m=s[2]-48;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		max=a[i][0];
	for(j=0;j<m;j++)
		if(max<a[i][j]){max=a[i][j];q=j;}				//printf("LLL%d  %d",max,q);}
	for(k=0;k<n;k++)
		if(max>a[k][q])p=0;
		if(p==1)
		{
			for(k=0;k<n;k++)if(a[k][q]==max)qq=k;
			printf("%d+%d",qq,q);
			t++;
			break;
		}
	}
	if(t==0)printf("No");
}