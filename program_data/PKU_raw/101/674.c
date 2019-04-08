int main()
	{
		int x,y,z,a,b,c,i,j;
		for(i=0;i<=2;i++)
		{
			a=i;
			for(j=0;j<=2;j++)
			{
				if(j==i)j++;
				else 
				{
					b=j;
					c=3-a-b;
					if(b>a&&c==a)x=0;
					else if(b<=a&&c!=a)x=2;
					else x=1;
					if(a>b&&a>c)y=0;
					else if(a<=b&&a<=c)y=2;
					else y=1;
					if(c>b&&b>a)z=0;
					else if(c<=b&&b<=a)z=2;
					else z=1;
					if(x==a&&y==b&&z==c)
					{
					if(b>c&&a>c){putchar('C');if(b>a)printf("AB");else printf("BA");}
					else if(a>b&&c>b){putchar('B');if(a>c)printf("CA");else printf("AC");}
					else if(a<b&&b<c)printf("ABC");
					else printf("ACB");
					
					}
				}
			}
		}
return 0;
}