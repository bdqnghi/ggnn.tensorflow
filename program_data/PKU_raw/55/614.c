long change1(char a[],int n1)
{
	int s=0,temp;
	int len,i;
	len=strlen(a);
	
	for(i=0;i<len;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
			temp=a[i]-'0';
		if(a[i]>='a'&&a[i]<='z')
			temp=a[i]-'a'+10;
		if(a[i]>='A'&&a[i]<='Z')
			temp=a[i]-'A'+10;
		
		s=s*n1+temp;
	
	}
	
	return s;
}

void change2(long s,int n2,char b[])
{
	int i=0,j;
	int temp,add;
	while(s>0)
	{
		add=s%n2;
		
		if(add>=10)
		{
			b[i]=add-10+'A';
		}
		else
			b[i]=add+'0';
       
        
		i++;
		s=s/n2;
	
	}
		for(j=0;j<=i/2-1;j++)
		{
			temp=b[j];
			b[j]=b[i-1-j];
			b[i-1-j]=temp;
		}
}
	
	

void main()
{
	char a[50]={0},b[50]={0};
	int n1,n2,len,i;
	long s;
	scanf("%d%s%d",&n1,a,&n2);
	
	s=change1(a,n1);
	
	change2(s,n2,b);
    len=strlen(b);
	if(len>0)
	{
	for(i=0;i<len;i++)
	   printf("%c",b[i]);
	printf("\n");
	}
	if(len==0)
		printf("0\n");
}



