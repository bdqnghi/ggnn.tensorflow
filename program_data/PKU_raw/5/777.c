int main(){
	int i,c=0;
	double n,x=0,y=0;
	char a[600],b[600];
	scanf("%lf",&n);
	
		scanf("%s",a);
	
		scanf("%s",b);
	
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T'))
		{
			printf("error");
			c=1;
			break;
		}
		else
		{
			if(a[i]==b[i])
			{
			   x++;
			}
		}
		y++;
		
	}
	if(c==0)
	{
	if(b[i]!='\0')
	{
		printf("error");
		c=1;
	}
	}
	
	if(c==0)
	{
		if((x/y)>n)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}

	return 0;
}
