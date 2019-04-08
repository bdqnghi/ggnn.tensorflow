int p(int x[5][5],int y,int z)
{
	int u,i,temp;
	if(y>=0&&y<=4&&z>=0&&z<=4)
	{
		u=1;
		for(i=0;i<5;i++)
		{
			temp=x[y][i];
			x[y][i]=x[z][i];
			x[z][i]=temp;
		}
	}
	else u=0;
	return u;
}
void main()
{
	int a[5][5],b,c,i,j,d,w=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
		scanf("%d %d",&b,&c);
		d=p(a,b,c);
		if(d==1)
		{
		for(i=0;i<5;i++)
		   for(j=0;j<5;j++)
		   {
			   if(j==4)printf("%d",a[i][j]);
			   else
			   printf("%d ",a[i][j]);
			   w++;
			   if(w==5)
				   printf("\n");
			   if(w==10)printf("\n");
			   if(w==15)printf("\n");
			   if(w==20)printf("\n");
		   }
		}
		else printf("error");
}