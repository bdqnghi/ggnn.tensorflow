void main()
{
	char a[100],b[100],c[100],r;
	int n,i,j,k,la,lb,t;
	struct
	{
		char result[100];
	}result[50];
	
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%s%s",a,b);
		la=strlen(a);
		lb=strlen(b);
		for(i=0;i<la/2;i++)
		{
			r=a[i];
			a[i]=a[la-i-1];
			a[la-i-1]=r;
		}
		for(i=0;i<lb/2;i++)
		{
			r=b[i];
			b[i]=b[lb-i-1];
			b[lb-i-1]=r;
		}
	

		for(i=0;i<lb;i++)
		{
			if(a[i]>=b[i])
			{
				t=a[i]-b[i];
			}
			else
			{
				if(a[i+1]==48)
				{
					for(j=0;;j++)
					{
						if(a[i+1+j]==48)
						{
							a[i+1+j]=57;
							continue;
						}
						else 
						{
							a[i+1+j]=a[i+1+j]-1;break;
						}
					}
				}
				else
				{
					a[i+1]=a[i+1]-1;
				}
				t=a[i]+10-b[i];
			}
			c[i]=t+48;
		}
		for(i=lb;i<la;i++)
		{
			c[i]=a[i];
		}
		for(i=0;i<la/2;i++)
		{
			r=c[i];
			c[i]=c[la-i-1];
			c[la-i-1]=r;
		}
		for(i=0;;i++)
		{
			if(c[i]!=48)
			{
				for(j=0;j<la-i;j++)
				{
					result[k].result[j]=c[i+j];
				}
				
				result[k].result[la-i]='\0';
				break;
			}
		}
	}
	for(k=0;k<n;k++)
		printf("%s\n",result[k].result);
}



