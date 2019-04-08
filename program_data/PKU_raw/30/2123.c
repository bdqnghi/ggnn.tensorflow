int main()
{
	int n,g,s=0,i,S=0;
	scanf("%d",&n);
         if(n<100){
	for(i=1;i<=n;i++)
	{
		g=i%10;
		s=i/10;
		if(g!=7 && s!=7 && i%7!=0)
		{
			S+=pow(i,2);
		}
	}
        }
	printf("%d\n",S);
      return 0;
}
