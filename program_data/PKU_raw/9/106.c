main()
{
	int n,m[100];
	int t,i,j;
	char str[100][10],s[10];

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",str[i],&m[i]);
	for(j=1;j<n;j++)
		for(i=0;i<n-j;i++)
		{
			if(m[i]>=60)
			{if(m[i+1]>=60)
			  {if(m[i+1]>m[i]) 
				  {strcpy(s,str[i]);strcpy(str[i],str[i+1]);strcpy(str[i+1],s);t=m[i];m[i]=m[i+1];m[i+1]=t;}
			  }
			else {strcpy(s,str[i]);strcpy(str[i],str[i+1]);strcpy(str[i+1],s);t=m[i];m[i]=m[i+1];m[i+1]=t;}}
			if(m[i]<60)
			{
				if(m[i+1]>=60)   {strcpy(s,str[i]);strcpy(str[i],str[i+1]);strcpy(str[i+1],s);t=m[i];m[i]=m[i+1];m[i+1]=t;}
			
			}
		}
		for(i=0;i<n;i++)
		printf("%s\n",str[i]);
}

