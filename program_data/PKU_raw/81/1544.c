void main()
{
	int change(int x,int y);int b[5]={0};
	int n,m,i,j,k;
	int a[5][5]={0};
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
    scanf("%d%d",&n,&m);
		k=change(n,m);
    if(k==0)
	{printf("error");
	
	}
	else if(k==1){
		   for(i=0;i<=4;i++)b[i]=a[n][i];
		  for(i=0;i<=4;i++)a[n][i]=a[m][i];
		  for(i=0;i<=4;i++)a[m][i]=b[i];
for(i=0;i<=4;i++)

{
	
		
			printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
}
	}
}
int change(int x,int y)
{
	int z;
	if(0<=x&&x<=4&&0<=y&&y<=4&&x!=y)z=1;
	else z=0;
	return(z);
}
		  

