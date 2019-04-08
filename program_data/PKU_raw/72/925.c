int main(){
	int m,n,tmp,array[20][20],i,j;
	scanf("%d%d",&m,&n);
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf("%d",&(array[i][j]));
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			{
			tmp=0;
			if ((i==0)||(array[i][j]>=array[i-1][j]))
				tmp++;
			if ((j==0)||(array[i][j]>=array[i][j-1]))
				tmp++;
			if ((i==m-1)||(array[i][j]>=array[i+1][j]))
				tmp++;
			if ((j==n-1)||(array[i][j]>=array[i][j+1]))
				tmp++;
			if (tmp==4)
				printf("%d %d\n",i,j);
			}
	return 0;
}