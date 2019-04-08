int main(int argc, char* argv[])
{
	int x,y;
	scanf("%d%d",&x,&y);
	while(x!=y)
	{
	if(x>y)
		x/=2;
	else
		y/=2;
	}
	printf("%d",x);
	
	return 0;
}

