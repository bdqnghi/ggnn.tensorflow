int main()
{
	int a[5][5];
    int i,j,max=0,address[5][2],exist1=0,exist2=0;
    for (i=1;i<=5;i++)
	{   max=0;
	    for (j=1;j<=5;j++)
		{
			scanf("%d",&a[i-1][j-1]);
		    if (a[i-1][j-1]>max)
			{ 
			 max=a[i-1][j-1];
			 address[i-1][0]=i-1;
			 address[i-1][1]=j-1;
			 
			}
		}
	
	}

	for (i=1;i<=5;i++)
	{ int hang,lie;
		for (j=1;j<=5;j++)
		{   
			hang=address[i-1][0];
			lie=address[i-1][1];
			if (a[j-1][lie]<a[hang][lie])
                 exist1=1;
		}
		if (exist1==0)
		{
			printf("%d %d %d",hang+1,lie+1,a[hang][lie]);
			exist2=1;
		}
		exist1=0;
	}
	if (exist2==0)
		printf("%s","not found");
	getchar();
return 0;
}