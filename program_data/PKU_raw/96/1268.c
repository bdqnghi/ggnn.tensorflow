int main()
{
	char a[max],shang[max];
	int yu,i,j,n;
	gets(a);
	n=strlen(a);
	if(n==1)
	{
		printf("0\n");
		printf("%d",a[0]-'0');
		return 0;
	}
	if(n==2)
	{
		if(((a[0]-'0')*10+a[1]-'0')<13)
		{
			printf("0\n");
			printf("%s",a);
		}
		else
		{
			printf("%d\n",((a[0]-'0')*10+a[1]-'0')/13);
			printf("%d",((a[0]-'0')*10+a[1]-'0')%13);
		}
	}
	else
	{
		yu=(a[0]-'0')*10+a[1]-'0';
		if(yu<13)
		{
		    yu=yu*10+a[2]-'0';
		    shang[0]=yu/13;
		    yu=yu%13;
		for(i=3;i<n;i++)
		{
            yu=yu*10+a[i]-'0';
			shang[i-2]=yu/13;
			yu=yu%13;  
        }
        for(i=0;i<n-2;i++)
        printf("%d",shang[i]);
        printf("\n");
        printf("%d",yu);
        }
		
		if(yu>=13)
		{
			shang[0]=yu/13;
			yu=yu%13;
			for(i=2;i<n;i++)
		{
            yu=yu*10+a[i]-'0';
			shang[i-1]=yu/13;
			yu=yu%13;  
        }
        for(i=0;i<n-1;i++)
        printf("%d",shang[i]);
        printf("\n");
        printf("%d",yu);
		}
	}
	return 0;
}