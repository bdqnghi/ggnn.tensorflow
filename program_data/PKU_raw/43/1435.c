void main()
{
	int m,a,b,c,d;
	scanf("%d",&m);
	for(a=3;a<m;a++)
	{
		for(c=2;c<=sqrt(a);c++)
				if(a%c==0)
					break;
				if(c>sqrt(a))
				{
					b=m-a;
					for(d=2;d<=sqrt(b);d++)
					{
						if(b%d==0)
							break;
					}
					if(d>sqrt(b)&&a<=b)
						printf("%d %d\n",a,b);
				}
				}
}
