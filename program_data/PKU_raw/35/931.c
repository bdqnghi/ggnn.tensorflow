void main()
{
	int a[8][8];
	int i,j,k,l,t;int m,n,max=0,jishuqi=0;
	int hang,lie; 
	scanf("%d,%d",&hang,&lie);
	for(i=0;i<=hang-1;i++)
		for(j=0;j<=lie-1;j++)
		{scanf("%d",&a[i][j]);}
	for(i=0;i<=hang-1;i++)
	{
		for(j=0;j<=lie-1;j++)
			if(a[i][j]>max)
			{
				max=a[i][j];
			    m=i;n=j;
			}
			/*printf("%d %d\n",m,n);*/
			for(k=0;k<=hang-1;k++)
			{
				if(a[m][n]<a[k][n])
					jishuqi=jishuqi+1;
			}
			if(jishuqi==hang-1)
				printf("%d+%d\n",m,n);
			else printf("No\n");
			break;
	}
}
