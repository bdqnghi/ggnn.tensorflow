int main()
{
	int n,a=0,b=0;
	while(scanf("%d,",&n)!=EOF)
	{
                                 if(n>a)
                                 {b=a;a=n;}
                                 else if(n<a)
                                 if(n>b)
                                 b=n;
                                 }	
   if(b==0)
   printf("No");
   else printf("%d",b);
}