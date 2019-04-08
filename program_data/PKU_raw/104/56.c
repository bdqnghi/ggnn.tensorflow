
void main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int i=x,j=y;
	while(i!=0&&j!=0)
	{
		if(i==j)
			break;
		else if(i>j)
			i=i/2;
		else
			j=j/2;
	}
	printf("%d\n",i);
}