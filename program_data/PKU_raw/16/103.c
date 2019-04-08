
int main()
{
	int n,i,w,c;
	scanf("%d",&n);
	if (n>9999)
		printf("00001");
	else if (n>999)
		w=4;
	else if (n>99)
		w=3;
	else if (n>9)
		w=2;
	else printf("%d",n);

	for(i=1;i<w+1;i++)
	{   
		c=n%10;
		n=n/10;
		
		printf("%d",c);
	}


return 0;
}
