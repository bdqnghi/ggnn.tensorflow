
int main()

{

	char a[301],*ps;

	gets(a);

	int i,j, flag = 0;

	for(i=65,j=0;i<91;i++)

	{

	    for(ps=a;*ps!='\0';ps++)

		{

			if(*ps==i)

			{

				j++;

			}

		}

		if(j!=0)

		{

		   printf("%c=",i);

		   printf("%d\n",j);

		   j=0;

		   flag = 1;

		}

	}

	for(i=97,j=0;i<123;i++)

	{

		for(ps=a;*ps!='\0';ps++)

		{

			if(*ps==i)

			{

				j++;

			}

		}

		if(j!=0)

		{

			printf("%c=",i);

			printf("%d\n",j);

			j=0;

			flag = 1;

		}

	}

	if(flag == 0)

		printf("No\n");



	return 0;

}

