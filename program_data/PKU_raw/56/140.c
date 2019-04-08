
int main()
{
	int x,y;
	scanf("%d",&x);
	do{
		y=x%10;
		printf("%d",y);
		x/=10;
	}while(x);
	return 0;
}
