void main()
{
	int m,n,a[8][8],i,j,temp,l,num=0,k;
    scanf("%d,%d",&m,&n);
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
    for(i=0;i<m;i++)
	{
		{for(j=0,temp=a[i][0],l=0;j<n;j++)
	   if(temp<a[i][j]){temp=a[i][j];l=j;}
		}
		 for(k=0;k<m&&temp<=a[k][l];k++);
	   if(k==m){printf("%d+%d\n",i,l);num=1;}
	}
    if(num==0)printf("No");
}