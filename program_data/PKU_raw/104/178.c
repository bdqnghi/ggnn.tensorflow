void main()
{
	int a,b,i,j,t,s;
	scanf("%d%d",&a,&b);
	t=a;
	if(a==1||b==1)
		printf("1");
	else
	{
		for(i=0;i<10;i++)
		{
			s=b;
			for(j=0;j<10;j++)
			{
				if(t==s)
					break;
				s=s/2;
			}
			if(t==s)
				break;
			t=t/2;
		}
		printf("%d",s);
	}
}


