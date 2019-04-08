int main(){
	int map[5][5],max[5],t,i,j,t_max;
	int b=0;
	for(i=0;i<5;i++)
	{
		t_max=0;
		for(j=0;j<5;j++)
		{
			scanf("%d ",&t);
			map[i][j]=t;
			if(t_max<t)
			{
				max[i]=j;
				t_max=t;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(map[j][max[i]]<map[i][max[i]])
				break;
		}
		if(j==5)
		{
			printf("%d %d %d\n",i+1,max[i]+1,map[i][max[i]]);
			b=1;
		}
	}
	if(b==0)
		printf("not found\n");
	return 0;
}