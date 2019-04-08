void main()
{
	int r,c,i,j,a[8][8],max[8],maxj[8],flag[8]={1,1,1,1,1,1,1,1},flag1=0;
	scanf("%d,%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{scanf("%d",*(a+i)+j);
		if(j==0){max[i]=*(*(a+i)+j);maxj[i]=j;}
		else if(a[i][j]>max[i]){max[i]=a[i][j];maxj[i]=j;}
		}
	}
	for(i=0;i<r;i++)
		for(j=0;j<r;j++)if(a[j][maxj[i]]<max[i])flag[i]=0;
	for(i=0;i<r;i++)
	{
		if(flag[i]==1)printf("%d+%d\n",i,maxj[i]);
		flag1+=flag[i];
	}
	if(flag1==0)printf("No\n");
}