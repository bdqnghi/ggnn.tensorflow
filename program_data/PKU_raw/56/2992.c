void main()
{	
    int n;
	scanf("%d",&n);
    void move(int n);
	move(n);
}
void move(int n)
{
	while(n!=0)
	{
	printf("%d",n%10);
	n=n/10;
	}
}
