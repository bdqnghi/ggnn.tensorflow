void main()
{
	int n;
	void suan(int a);
	scanf("%d",&n);
    suan(n);
    
}
void suan(int a)
{
	int s;
    if(a==1)
		printf("End");
	else if(a%2==0)
	{
		s=a/2;
		if(s!=1)
		{
			printf("%d/2=%d\n",a,s);
		suan(s);
		}
		else 
		{   printf("%d/2=%d\n",a,s);
		printf("End");}
		
	}
	else if(a%2!=0)
	{
		s=a*3+1;
		printf("%d*3+1=%d\n",a,s);
		suan(s);
	}
}