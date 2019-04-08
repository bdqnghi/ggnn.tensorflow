int main()
{
	int a[5][5];
	int i, j;
	int flag=1, count=0;
	for(i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
			scanf("%d", &a[i][j]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i][0]<a[i][1]||a[i][0]<a[i][2]||a[i][0]<a[i][3]||a[i][0]<a[i][4])
			flag=0;
		else
		{
			if(a[i][0]>a[0][0]||a[i][0]>a[1][0]||a[i][0]>a[2][0]||a[i][0]>a[3][0]||a[i][0]>a[4][0])
				flag=0;
			else 
			{
				printf("%d 1 %d\n", i+1, a[i][0]); 
				count++;
			}
		}
	}
		for(i=0;i<5;i++)
	{
		if(a[i][1]<a[i][0]||a[i][1]<a[i][2]||a[i][1]<a[i][3]||a[i][1]<a[i][4])
			flag=0;
		else
		{
			if(a[i][1]>a[0][1]||a[i][1]>a[1][1]||a[i][1]>a[2][1]||a[i][1]>a[3][1]||a[i][1]>a[4][1])
				flag=0;
			else 
			{
				printf("%d 2 %d\n", i+1, a[i][1]); 
				count++;
			}
		}
	}
		for(i=0;i<5;i++)
	{
		if(a[i][2]<a[i][0]||a[i][2]<a[i][1]||a[i][2]<a[i][3]||a[i][2]<a[i][4])
			flag=0;
		else
		{
			if(a[i][2]>a[0][2]||a[i][2]>a[1][2]||a[i][2]>a[2][2]||a[i][2]>a[3][2]||a[i][2]>a[4][2])
				flag=0;
			else 
			{
				printf("%d 3 %d\n", i+1, a[i][2]);
				count++;
			}
		}
	}
		for(i=0;i<5;i++)
	{
		if(a[i][3]<a[i][0]||a[i][3]<a[i][1]||a[i][3]<a[i][2]||a[i][3]<a[i][4])
			flag=0;
		else
		{
			if(a[i][3]>a[0][3]||a[i][3]>a[1][3]||a[i][3]>a[2][3]||a[i][3]>a[3][3]||a[i][3]>a[4][3])
				flag=0;
			else 
			{
				printf("%d 4 %d\n", i+1, a[i][3]); 
				count++;
			}
		}
	}
		for(i=0;i<5;i++)
	{
		if(a[i][4]<a[i][0]||a[i][4]<a[i][1]||a[i][4]<a[i][3]||a[i][4]<a[i][2])
			flag=0;
		else
		{
			if(a[i][4]>a[0][4]||a[i][4]>a[1][4]||a[i][4]>a[2][4]||a[i][4]>a[3][4]||a[i][4]>a[4][4])
				flag=0;
			else 
			{
				printf("%d 5 %d\n", i+1, a[i][4]); 
				count++;
			}
		}
	}
		if (flag==0&&count==0)
			printf("not found\n");
return 0;
}







