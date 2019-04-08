int judge(int m,int n);
int main(){
	int m,n,i,j,array[5][5],tmp;
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			scanf("%d",&(array[i][j]));
	scanf("%d%d",&m,&n);
	if (judge(m,n))
	{
		for (i=0;i<5;i++)
			{
			tmp=array[m][i];
			array[m][i]=array[n][i];
			array[n][i]=tmp;
			}
		for (i=0;i<5;i++)
		{
			for (j=0;j<4;j++)
				printf("%d ",array[i][j]);
			printf("%d\n",array[i][4]);
		}
	}
		else printf("error");
	return 0;
}
int judge(int m,int n)
{
	if ((m<5)&&(n<5))
		return 1;
	else return 0;
}

