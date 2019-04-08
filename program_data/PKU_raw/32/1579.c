
void plus(char a[],char b[])
{
	int * p1,* p2,*p;
	int c[100],i,l1,l2;
	l1=strlen(a);
	l2=strlen(b);
	for(i=0;i<l2;i++)
	{
		c[i]=a[l1-1-i]-b[l2-i-1];
		
	}
	for(i=l2;i<l1;i++)
	{
		c[i]=a[l1-i-1]-'0';
		
	}
	for(i=0;i<l1;i++)
	{
		if(c[i]<0)
		{
			c[i]=10+c[i];
			c[i+1]=c[i+1]-1;		
		}	
	}		
	p1=c;
	p2=p1+l1-1;
	for(p=p2;p!=p1;p--)
	{
		printf("%d",* p);
	}
	printf("%d\n",* p1);




	


}



void main()
{
	int n,i;
	char a[100][100],b[100][100];

	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		scanf("%s",b[i]);
		
	}

	for(i=0;i<n;i++)
	{
		plus(a[i],b[i]);
	}


}