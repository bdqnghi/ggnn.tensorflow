
main()
{
	int n;
	int k,p;
	scanf("%d\n",&n);
	char a[500];
	gets(a);
	char b[501][5]={'\0'};
	int i=1,j;
	if(n==2)
	{
		for(j=0;j<strlen(a)-1;j++)
		{
			b[j][0]=a[j];
			b[j][1]=a[j+1];
		}
		int c[500];
		for(j=0;j<strlen(a);j++)
		{
			c[j]=1;
		}
		for(k=0;k<strlen(a)-1;k++)
		{
			for(p=k+1;p<strlen(a);p++)
			{
				if(strcmp(b[k],b[p])==0)
					c[k]=c[k]+1;
			}
		}
		int max=c[0];
		for(k=1;k<strlen(a);k++)
		{
			if(c[k]>max)
				max=c[k];
		}
		if(max==1)
			printf("NO");
		else
		{
			printf("%d\n",max);
			for(j=0;j<strlen(a);j++)
			{
				if(c[j]==max)
					printf("%s\n",b[j]);
			}
		}
	}
	else if(n==3)
	{
		for(j=0;j<strlen(a)-2;j++)
		{
			b[j][0]=a[j];
			b[j][1]=a[j+1];
			b[j][2]=a[j+2];
		}
		int c[500];
		for(j=0;j<strlen(a)-1;j++)
		{
			c[j]=1;
		}
		for(k=0;k<strlen(a)-2;k++)
		{
			for(p=k+1;p<strlen(a)-1;p++)
			{
				if(strcmp(b[k],b[p])==0)
					c[k]=c[k]+1;
			}
		}
		int max=c[0];
		for(k=1;k<strlen(a)-1;k++)
		{
			if(c[k]>max)
				max=c[k];
		}
		if(max==1)
			printf("NO");
		else
		{
		printf("%d\n",max);
		for(j=0;j<strlen(a)-1;j++)
		{
			if(c[j]==max)
				printf("%s\n",b[j]);
		}
		}
	}
	else if(n==4)
	{
		for(j=0;j<strlen(a)-3;j++)
		{
			b[j][0]=a[j];
			b[j][1]=a[j+1];
			b[j][2]=a[j+2];
			b[j][3]=a[j+3];
		}
		int c[500];
		for(j=0;j<strlen(a)-2;j++)
		{
			c[j]=1;
		}
		for(k=0;k<strlen(a)-3;k++)
		{
			for(p=k+1;p<strlen(a)-2;p++)
			{
				if(strcmp(b[k],b[p])==0)
					c[k]=c[k]+1;
			}
		}
		int max=c[0];
		for(k=1;k<strlen(a)-2;k++)
		{
			if(c[k]>max)
				max=c[k];
		}
		if(max==1)
			printf("NO");
		else
		{
		printf("%d\n",max);
		for(j=0;j<strlen(a)-1;j++)
		{
			if(c[j]==max)
				printf("%s\n",b[j]);
		}
		}
	}



}