

int main()
{
	int a,b=0,c;
	char d;
	scanf("%d",&a);
	for(;;)
	{
		d=getchar();
		if(d!=',')
			break;
		else
		{
			scanf("%d",&c);
			if(c>a)
			{
				b=a;
				a=c;
			}
			else if(c<a&&c>b)
				b=c;
			else
				continue;
		}
	}
	if(b==0)
		printf("No");
	else 
		printf("%d",b);
return 0;
}


