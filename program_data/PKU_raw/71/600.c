int f(int x)
{
	int y;
	y=(((x%4==0)&&(x%100!=0))||(x%400==0))?1:0;
	return (y);
}
int main()
{
	int a=0,b=0,c=0,p=0,n=0;
	int q=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(b>c)
		{
			q=b;
			b=c;
			c=q;
		}
		if(f(a)== 1 && b<=2 && c>2 )
					p+=1;
		for(b;b<c;b++)
		{
			switch(b)
			{
			case(2):p+=28;break;
			case(4):p+=30;break;
			case(6):p+=30;break;
			case(9):p+=30;break;
			case(11):p+=30;break;
			default:p+=31;break;
			}
		}
		if(p%7==0)
			printf("YES\n");
		else 
			printf("NO\n");
		p=0;
	}
	return 0;
}