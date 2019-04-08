main()
{
	int i,j,al;
	char c[4]="013";
	char cf[3]="13";
	char a[233],b[233],d[233],e[4],ef[3];
	scanf("%s",a);
	al=strlen(a);
	for(i=0;i<al;i++)
	{
		d[i]='0';
	}
	strcpy(b,a);
	d[al-1]='\0';
	e[3]='\0';
	if(al==1||(al==2&&a[0]=='1'&&a[1]<'3'))
	{
		printf("0\n%s",a);
	}
	else
	{
	for(i=0;i<al-1;i++)//i???
	{
		//????? 
		if(i==0)
		{
			ef[0]=b[0];
			ef[1]=b[1];
			for(j=0;strcmp(ef,cf)>=0;j++)
			{
				
				b[i]=b[i]-1;
				b[i+1]=b[i+1]-3;
				//printf("%s\n",b);
				if(b[i+1]<'0')
				{	
					b[i+1]=b[i+1]+10;
					b[i]=b[i]-1;
				}
			//	printf("%s\n",b);
				ef[0]=b[0];
				ef[1]=b[1];
				
			}
			d[0]=j+'0';
		//	printf("%s\n",d);
		}
		else
		{	
			e[0]=b[i-1];
			e[1]=b[i];
			e[2]=b[i+1];
		//	printf("%s\n",b);
			for(j=0;strcmp(e,c)>=0;j++)
			{
				
				b[i]=b[i]-1;
				b[i+1]=b[i+1]-3;
				if(b[i+1]<'0')
				{
					b[i]=b[i]-1;
					b[i+1]=b[i+1]+10;
				}
				if(b[i]<'0')
				{
					b[i-1]=b[i-1]-1;
					b[i]=b[i]+10;
				}
				e[0]=b[i-1];
				e[1]=b[i];
				e[2]=b[i+1];
		//		printf("%s\n",b);
			}
			d[i]='0'+j;
		//	printf("%s\n",d);	
		}
	}
	if(d[0]=='0')
	{
		for(i=0;i<al-1;i++)
		{
			d[i]=d[i+1];
		}
		d[al-2]='\0';
	}
	if(b[al-2]=='0')
	{
		ef[0]=b[al-1];
		ef[1]='\0';
	}
	else
	{
		ef[0]=b[al-2];
		ef[1]=b[al-1];
	}
	printf("%s\n%s",d,ef);
}
}