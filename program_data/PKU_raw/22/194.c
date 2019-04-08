void main()
{
	char a[300];
	int i,j=0,total=0,m,n,b[300]={0},l,flag=0;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{   
			m=a[i]-48;
			b[j]=b[j]*10+m;
		if(a[i+1]==','||a[i+1]=='\0')
		{
			j++;
			total++;
		}
		}
	}
	
	
		for(i=1;i<total;i++)
		for(j=0;j<total-i;j++)
		if(b[j]<b[j+1])
		{
			n=b[j];
			b[j]=b[j+1];
			b[j+1]=n;
		}
		
		for(j=1;j<total;j++)
		if(b[j]<b[0])
		{printf("%d\n",b[j]);
			break;}
			
		
		if(b[0]==b[total-1])
		printf("No");
		
	}

