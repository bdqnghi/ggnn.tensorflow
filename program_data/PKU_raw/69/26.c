void main()
{
	char a[1000]={0},b[1000]={0},c[1000]={0};
	int na,nb,i,sum,add=0,max,flag;
	scanf("%s\n%s",a,b);  /* ????? */
    
	na=strlen(a);
	nb=strlen(b);
	
	if(na>=nb)
	{
		max=na;
		for(i=na-1;i-na+nb>=0;i--)
			b[i]=b[i-na+nb];
		for(i=0;i<na-nb;i++)
			b[i]='0';
	}
	
	else if(na<nb)
	{
		max=nb;
		for(i=nb-1;i-nb+na>=0;i--)
			a[i]=a[i-nb+na];
		for(i=0;i<nb-na;i++)
			a[i]='0';
	}
	
    
	for(i=max;i>0;i--)
	{
        sum=(a[i-1]-48)+(b[i-1]-48)+add;
        add=sum/10;
        c[i]=sum-add*10;
	}

	if(add!=0)
	{
		printf("%d",add);
		for(i=1;i<=max;i++)
			printf("%d",c[i]);
	}

	else if(add==0)
	{		
		for(i=1;i<=max;i++)   /* ?c??????0??? */
		{
			if(c[i]!=0)
			{
				flag=i;
				break;
			}
			else if(c[i]==0)
				flag=0;
		}	
		if(flag==0)     /*??0*/
			printf("0");
		else
			for(i=flag;i<=max;i++)
				printf("%d",c[i]);
	}
}