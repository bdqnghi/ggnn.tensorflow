void main() 
{ 
	int n,m,i,a,b;
          a=0;
          b=0;
	for(;;b++)
	{
		scanf("%d",&n);
		scanf("%d",&m);
		if(n==0 && m==0)
			break;
		for(i=2;i<=n; i++)
			a=(a+m)%i;
			printf("%d\n",a+1);
			a=0;
	}
return 0;
}