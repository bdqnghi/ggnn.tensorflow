int main()
{
	int h,l,a[1000][1000],j,i,k;
	scanf("%d %d",&h,&l);
	for(i=0;i<h;i++)
		for(j=0;j<l;j++)
			scanf("%d",&a[i][j]);
	for(k=0;k<l;k++)
        for(j=k,i=0;(j>=0&&i<h);i++,j--)
			printf("%d\n",a[i][j]);
		for(k=1;k<h;k++)
           for(j=l-1,i=k;(i<h&&j>=0);i++,j--)
			   printf("%d\n",a[i][j]);
}