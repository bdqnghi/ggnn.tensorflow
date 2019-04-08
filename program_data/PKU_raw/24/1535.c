int main()
{
	char a[1000]="                                                                                                                                                                                                                                                                          ";
	int b[200]={0},c[200]={0},i,j=0,d=0,e=100;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' '&&a[i]!=',')
		{
			b[j]+=1;
		}
		else
		{
			j+=1;
			c[j]=i;
		}
	}
	for(j=0;j<200;j++)
	{
		if(b[j]>d)
		{
			d=b[j];
		}
		if(b[j]<e&&b[j]!=0)
		{
			e=b[j];
		}
	}
	for(j=0;j<200;j++)
	{
		if(b[j]==d)
		{
			if(c[j]==0)
			{
				for(i=c[j];i<c[j]+d-1;i++)
			{
				printf("%c",a[i]);
			}
			printf("%c\n",a[c[j]+d-1]);
			}
			else
			{

			for(i=c[j]+1;i<c[j]+d;i++)
			{
				printf("%c",a[i]);
			}
			printf("%c\n",a[c[j]+d]);
			}
			break;
		}
	}
	for(j=0;j<200;j++)
	{
		if(b[j]==e)
		{
			if(c[j]==0)
			{
				for(i=c[j];i<c[j]+e-1;i++)
			{
				printf("%c",a[i]);
			}
			printf("%c\n",a[c[j]+e-1]);
			}
			else
			{
		
		
			for(i=c[j]+1;i<c[j]+e;i++)
			{
				printf("%c",a[i]);
			}
			printf("%c\n",a[c[j]+e]);
		}
			break;
	}
		}
	
	return 0;
}