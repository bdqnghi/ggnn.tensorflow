main()
{
	int a=0,b=0,c=0,d=0;
	char str1[250],str2[250],str3[250],str[250],str4[250],str5[250];
	scanf("%s",str1);
	scanf("%s",str2);
	a=strlen(str1);
	b=strlen(str2);
	if(str1[0]==48)
	{
		for(int i=0;i<a;i++)
		{
			if(str1[i]!='0')
			{
				c=i;
//				printf("%d\n",c);
				break;
			}
		}	
		for(int i=0;i<(a-c);i++)
		{
			str4[i]=str1[i+c];
	    }
	    for(int i=0;i<(a-c);i++)
	    {
			str1[i]=str4[i];
		}
		str1[a-c]='\0';
		a=a-c;
	}
	if(str2[0]==48)
	{
		for(int i=0;i<b;i++)
		{
			if(str2[i]!='0')
			{
				c=i;
				break;
			}
		}	
		for(int i=0;i<(b-c);i++)
		{
			str5[i]=str2[i+c];
	    }
	    for(int i=0;i<(b-c);i++)
	    {
			str2[i]=str5[i];
		}
		str2[b-c]='\0';
		b=b-c;
	}	
//	printf("%s %s\n",str1,str2);
	if(a>=b)
	{
		for(int i=0;i<b;i++)
		{
			str3[i+a-b]=str2[i];
	    }
	    for(int i=0;i<a;i++)
	    {
			str2[i]='0';
		}
		for(int i=0;i<b;i++)
		{
			str2[i+a-b]=str3[i+a-b];
	    }
//		printf("%s\n",str2);	    
	}
	else
	{
		for(int i=0;i<a;i++)
		{
			str3[i+b-a]=str1[i];
	    }
	    for(int i=0;i<b;i++)
	    {
			str1[i]='0';
		}
		for(int i=0;i<a;i++)
		{
			str1[i+b-a]=str3[i+b-a];
	    }
//		printf("%s\n",str1);		
	}
	if(a<=b)
	a=b;
	for(int i=0;i<a;i++)
	{
	    str[i]=str1[i]+str2[i]-48;
	}
 //   printf("%d,%d,%d\n",str1[0],str2[0],str[0]);
//	printf("%d\n",a-1);
//	printf("%d,%d,%d,%d\n",str[3],str[2],str1[2],str2[2]);	
	for(int i=a-1;i>0;i=i-1)
	{
		if(str[i]>=58)
		{
			str[i]=str[i]-10;
			str[i-1]=str[i-1]+1;
//			printf("%d,%d\n",str[i],str[i-1]);
	    }
	}
	str[a]='\0';
	if(str[0]>=('0'+10))
	{
		str[0]=str[0]-10;
		printf("1%s\n",str);
//		printf("%s\n",str);
	}

	else
	printf("%s",str);	
} 