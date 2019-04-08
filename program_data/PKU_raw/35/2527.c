int main()
{
	int a[30][30],i,j,x[30],y[30],n,t,bo,m;
	scanf("%d,%d",&n,&m);
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			scanf("%d",&a[i][j]);
		for (i=0;i<n;i++){
		 t=a[i][0];
		 x[i]=0;
		 for (j=0;j<m;j++)
			 if (a[i][j]>t){
			  t=a[i][j];
			  x[i]=j;
			 }
		}
		for (i=0;i<m;i++){
		 t=a[0][i];
		 y[i]=0;
		 for (j=0;j<n;j++)
			 if (a[j][i]<t){
			  t=a[j][i];
			  y[i]=j;
			 }
		}
		bo=0;
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			if (x[i]==j&&y[j]==i){
			 printf("%d+%d",i,j);
			 bo=1;
			}
	if (bo==0) printf("No");
	return 0;
}