int finder(int a,int b)
{
	int c;
	for(;a;a=a/2)
		for(c=b;c>=a;c=c/2)
			if(a==c)
			{
				printf("%d",c);
				return 0;
			}
}

int main()   
{   
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	finder(a,b);  
	return 0;
}   