
int main()
{
	int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n,i,y,a,b,c;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&y);
		scanf("%d",&a);
		scanf("%d",&b);

		if(y%400==0||(y%100!=0&&y%4==0))
			m[1]=29;
		else m[1]=28;

		if(a>b)
		{
			c=a-b;
			a=b;
		}
		else c=b-a;

		b=0;
		for(;c>0;c--)
		{
			b+=m[a-1];
			a++;
		}
		if(b%7==0)
			printf("YES\n");
		else printf("NO\n");       
	}
	return 0;
}