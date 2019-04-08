

int main(){
	int a=0,b=0,c=1,m,n;
	int x,y,z;
	int result=0;
	int sz[LEN];
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&(sz[i]));
        for(int j=1;j<=sz[i];j++)
		{
			b=a+c;
		c=a;
		a=b;
        result=b;
		}
		printf("%d\n",result);
		a=0;
		b=0;
		c=1;
	}
	return 0;
}
	



