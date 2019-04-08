int main() 
{
	int w,i,j;
	int a[13][32];
	scanf("%d",&w);
	a[0][0]=w;
	for(i=1;i<=12;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			for(j=1;j<=31;j++)
			{
				a[i][j]=w;
				if(w==7)
					w=1;
				else
					w+=1;
			}
		}
		if(i==4||i==6||i==9||i==11)
		{
			for(j=1;j<=30;j++)
			{
				a[i][j]=w;
				if(w==7)
					w=1;
				else
					w+=1;
			}
		}
		if(i==2)
		{
			for(j=1;j<=28;j++)
			{
				a[i][j]=w;
				if(w==7)
					w=1;
				else
					w+=1;
			}
		}
	}
	for(i=1;i<=12;i++)
	{
		if(a[i][13]==5)
		{
			printf("%d\n",i);
		}
	}
	return 0;

}