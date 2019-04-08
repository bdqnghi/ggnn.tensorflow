
void main ()
{
	int n,i,j,a[100][50];;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i][0]);
		for(j=1;j<=a[i][0];j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{  if(a[i][0]==0)printf("60\n");else{
		for(j=1;j<=a[i][0]&&a[i][j]+j*3-3<=60;j++);
		j--;
		if(60-a[i][j]-j*3<=3)
			printf("%d\n",a[i][j]);
			else 
				printf("%d\n",60-j*3);}
	}
}
