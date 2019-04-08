
int main(){
	int n;
	scanf("%d",&n);
	struct asd
	{
		int x,y;
	}
	as[100000];
	int i,j=0;
	for(i=0;;i++)
	{
		scanf("%d%d",&(as[i].x),&(as[i].y));
		if(as[i].x==0&&as[i].y==0)
			break;
		j++;
	}
	int g=0;
	for(int t=0;t<n;t++)
	{
		int e=0,f=0;
		for(i=0;i<j;i++)
		{
			if(as[i].x==t)
				e++;
			if(as[i].y==t)
				f++;
		}
		if(e==0&&f==n-1)
		{
			printf("%d",t);
			g++;
		}
	}
	if(g==0)
		printf("NOT FOUND");
	return 0;
	}