void main() 
{ 
	int n,t=0;
	scanf("%d",&n);
	while(n!=0)
	{
		t=t*10+n%10;
		n=(n-n%10)/10;	
	}
	printf("%d",t);
}
