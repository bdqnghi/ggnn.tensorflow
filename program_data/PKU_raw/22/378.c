main()
{
	int t,k=0,i,j=0,len;
	int a[300]={0};
	char str[1000];
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]!=',')
			a[j]=a[j]*10+str[i]-'0';
		else j++;
	}
	if(j==0) printf("No\n");
	else
	{
		for(i=0;i<=j;i++)
		{
			for(k=0;k<j;k++)
				if(a[k]<a[k+1])
				{
					t=a[k];
					a[k]=a[k+1];
					a[k+1]=t;
			    }
	    }
	    for(i=0;i<=j;i++)
		{
			if(a[i]!=a[0])
			{printf("%d\n",a[i]);break;}
			else if(i==j) printf("No\n");
		}
	    
	}
}