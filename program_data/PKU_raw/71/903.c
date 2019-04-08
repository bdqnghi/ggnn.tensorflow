int main()
{
	int n ,i,j,a=0,b=0,c;
	int y[300],m1[300],m2[300];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d%d%d",&y[i],&m1[i],&m2[i]);
	for (i=0;i<n;i++)
	{
		a=0;
		if (m1[i]>m2[i])
		{
			c=m1[i];
			m1[i]=m2[i];
			m2[i]=c;
		}

		for (j=m1[i];j<m2[i];j++)
		{
			if (j==1 || j==3 || j==5 || j==7 || j==8 || j==10||j==12)
				a=a+31;
			else if (j==4|| j==6 || j==9 || j==11)
				a=a+30;
			else if (j==2)
			{
				if ((y[i]%4==0 && y[i]%100 !=0) || y[i] % 400 ==0)
					a=a+29;
				else a=a+28;
			}
		}
		if (a%7==0)
			printf("YES\n");
		else printf("NO\n");
	}




	return 0;
}


