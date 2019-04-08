void main()
{
	int m,n,a,flag,k,i,j=0,x,y,num[100]={0};
	char temp[100]={'\0'},*p,*q;
	p=temp;
	q=temp;
	scanf("%d",&m);
	scanf("%d",&n);
	for(a=m;a<=n;a++)
	{
		k=sqrt(a);
		for(i=2;i<=k;i++)
		{
			if(a%i==0)
			{
				flag=0;
				break;
				
			}
		}
		if(i>sqrt(a))
		{
			flag=1;		
		
		}
	
	if(flag)
	{
		i=0;
		x=a%10;
		y=a/10;
		temp[99]=x+'0';
		
		while(y>=10)
		{
				
			x=y%10;
		    y=y/10;
			temp[98-i]=x+'0';
			i++;
		}
		temp[98-i]=y+'0';
		p=temp;
		q=temp+99;
		for(;p<q;p++)
		{
			if(*p!='\0')
			{
				break;
			}
		}
		
		for(;p<=q;p++,q--)
		{
			if(*p!=*q)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag)
	{
		num[j]=a;
		j++;
	}
	}
	if(num[0]==0)
	{
		printf("no");
	}
	else
	{
         j=0;
		while(num[j+1]!=0)
		{
			printf("%d,",num[j]);
			j++;
		}
		printf("%d",num[j]);
    }
   
	
}


