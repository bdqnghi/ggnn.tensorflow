int main()
{
	int i,n,year,a,b;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d %d %d",&year,&a,&b);
		if ((year%4==0&&year%100!=0)||year%400==0)
		{
			if(a==1||a==4||a==7)
				a=1;
			else if(a==2||a==8)
				a=2;
			else if(a==3||a==11)
				a=3;
			else if(a==9||a==12)
				a=9;
			
			if(b==1||b==4||b==7)
				b=1;
			else if(b==2||b==8)
				b=2;
			else if(b==3||b==11)
				b=3;
			else if(b==9||b==12)
				b=9;
		}
		else
		{
				if(a==1||a==10)
				a=1;
			else if (a==2||a==3||a==11)
				a=2;
			else if (a==4||a==7)
				a=4;
			else if (a==9||a==12)
				a=9;
			
			if(b==1||b==10)
				b=1;
			else if (b==2||b==3||b==11)
				b=2;
			else if (b==4||b==7)
				b=4;
			else if (b==9||b==12)
				b=9;
		}


			if(a==b)
			{
				printf("YES\n");
			}
			else 
			{
				printf("NO\n");
			}
	}
	return 0;
}