void main()
{
int i,n,j,sum,array[30][30];
int a,b,c,d;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
scanf("%d",&array[i][j]);
}i=0;j=0;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(array[i][j]==0&&array[i][j-1]!=0&&array[i-1][j]!=0){a=i;b=j;}
		if(array[i][j]==0&&array[i][j+1]!=0&&array[i+1][j]!=0){c=i;d=j;}
	}
}
sum=(c-a-1)*(d-b-1);
printf("%d",sum);

}