
int zh(char a)
{
	int b;
	if((a>='A')&&(a<='Z'))
	{
		b=(int)(a)-55;
		return b;
	}
	else
	{
		b=(int)(a)-48;
		return b;
	}
}
char fzh(int a)
{
	char b;
	if(a>9)
	{
		b=(char)(a-10+48);
		return b;
	}
	else
	{
		b=(char)(a+48);
		return b;
	}
}


int main()
{
	char a[10000],b[10000],a1[10000],b1[10000],c[10000];
	int n;
	int i,j,k;
	int sum=0;
	int l1,l2;
	int jinwei;
	for(i=0;i<9999;i++)
	{
		a1[i]='0';
		b1[i]='0';
	}
	a1[9999]='\0';
	b1[9999]='\0';
	
	
	
	scanf("%s%s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	
	for(i=0;i<l1;i++)
	{
		a1[l1-1-i]=a[i];
	}
	for(i=0;i<l2;i++)
	{
		b1[l2-1-i]=b[i];
	}


	for(i=0;i<9999;i++)
	{
		
		if(i==0)
		{
			c[i]=fzh(zh(a1[i])+zh(b1[i]));
			if((zh(a1[i])+zh(b1[i]))>9)
			{
				jinwei=1;
			}
			else 
			{
				jinwei=0;
			}
		}
		else
		{
			c[i]=fzh((zh(a1[i])+zh(b1[i]))+jinwei);
			if((zh(a1[i])+zh(b1[i])+jinwei)>9)
			{
				jinwei=1;
			}
			else
			{
				jinwei=0;
			}
		}
	}

	for(i=9998;i>=0;i--)
	{
		if(sum==0)
		{
			if(c[i]!='0')
			{
				printf("%c",c[i]);sum++;
			
			}
		}
		else
		{
			printf("%c",c[i]);
		}
	}
	if(sum==0)
	{
		printf("0");
	}
	return 0;
}


