int main (){
    int a,b,c;
	int n;
    c=0;
	scanf("%d",&n);
	for(a=0;10*a<=n;a++)
	{
		for(b=0;b<=9&&(10*a+b)<=n;b++)
		{
			if(a!=7&&b!=7&&(10*a+b)%7!=0)
			{
                c+=((10*a+b)*(10*a+b));
			}
		}
	}
	printf("%d",c);
	return 0;
}