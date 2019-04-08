
int main(int argc, char* argv[])
{
	int (*p)[22],i,j,a,b;
	p=(int(*)[22])calloc(22,22*sizeof(int));
	scanf("%d %d",&a,&b);
	memset(p,0,sizeof(p));
	for(i=1;i<a+1;i++)
		for(j=1;j<b+1;j++)
			scanf("%d",*(p+i)+j);
	for(i=1;i<=a;i++)
		for(j=1;j<=b;j++)
		{
			if(*(*(p+i)+j)>=*(*(p+i-1)+j)&&*(*(p+i)+j)>=*(*(p+i+1)+j)&&*(*(p+i)+j)>=*(*(p+i)+j+1)&&*(*(p+i)+j)>=*(*(p+i)+j-1))
				printf("%d %d\n",i-1,j-1);
		}
}
