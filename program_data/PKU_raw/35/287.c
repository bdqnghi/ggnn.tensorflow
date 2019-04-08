
int main(int argc, char* argv[])
{
	int i,j,m,n,a,b,t=0;
	int h[8][8],max,min;

	scanf("%d,%d",&m,&n);
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&h[i][j]);
        }
	}

	for(i=0;i<m;i++)
	{
		max=h[i][0];
		for(j=0;j<n;j++)
		{
			if(h[i][j]>=max){
				max=h[i][j];
				a=j;}
		}
		for(i=0;i<m;i++)
		{
			min=max;
			if(h[i][a]<=min)
			{
				min=h[i][a];
				b=i;
			}
		}
		if(max==min)
		{
			printf("%d+%d\n",b,a);
			t=1;
			break;
		}
    	
	}
	if(t==0){
		printf("No\n");}
	
	return 0;
}

