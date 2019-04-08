
int max(int a,int b)
{
	int c;
	if(a>b) c=a;
	else c=b;
	return (c);
}

void main ()
{
	char str1[100],str2[100],temp;
	char c[100]={0};
	int i,j,k,n,l,flag,x,y;
	flag=0;
	
	
	scanf("%d",&n);
	
	for(i=0;i<100;i++)
	{
		c[i]='0';
		str1[i]='0';
		str2[i]='0';
	}




	
	for(l=0;l<n;l++)
	{
		for(i=0;i<100;i++)
		{
			c[i]='0';
			str1[i]='0';
			str2[i]='0';
		}

		scanf("%s",str1);
		scanf("%s",str2);
		x=strlen(str1);
		y=strlen(str2);
		k=max(x,y);
		str1[x]='0';
		str2[y]='0';
		
		
		for(i=0;i<=(x-1)/2;i++)
		{
			c[0]=str1[i];
			str1[i]=str1[x-1-i];
			str1[x-1-i]=c[0];
		}


		for(i=0;i<=(y-1)/2;i++)
		{
			temp=str2[i];
			str2[i]=str2[y-1-i];
			str2[y-1-i]=temp;
		}

		for(i=0;i<k;i++)
		{
			if(flag==1)                {str1[i]-=1;flag=0;}
			if(str1[i]<str2[i])        {c[i]=10+(str1[i]-'0')-(str2[i]-'0')+'0';flag=1;}
			else if(str1[i]>=str2[i])  {c[i]=(str1[i]-'0')-(str2[i]-'0')+'0';}               
		}
		
		if(c[k-1]=='0')
		{
			for(i=0;i<=(k-2)/2;i++)
			{
				temp=c[i];
				c[i]=c[k-2-i];
				c[k-2-i]=temp;
			}
			for(i=0;i<k-1;i++)
			{
				printf("%c",c[i]);
			}
			printf("\n");
		}

		if(c[k-1]!='0')
		{
			for(i=0;i<=(k-1)/2;i++)
			{
				temp=c[i];
				c[i]=c[k-1-i];
				c[k-1-i]=temp;
			}
			
			for(i=0;i<k;i++)
			{
				printf("%c",c[i]);
			}
			printf("\n");
		}
	}
}