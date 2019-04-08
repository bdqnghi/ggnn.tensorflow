

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
		b=(char)(a+55);
		return b;
	}
	else
	{
		b=(char)(a+48);
		return b;
	}
}
int cf(int a,int b)
{
	int i;
	int sum=a;
	if(b==0)
	{
		sum=1;
	}
	for(i=0;i<b-1;i++)
	{
		sum*=a;
	}
	return sum;
}
int main()
{
	int a,b;
	int i,j;
	int l;
	
	char c[10000];
	char t[10000];
	int sum=0;
	
	
	scanf("%d%s%d",&a,c,&b);
	l=strlen(c);
	for(i=0;i<l;i++)
	{
		if((c[i]>='a')&&(c[i]<='z'))
	{
			c[i]=c[i]-'a'+'A';
		}
	}
	
	
	for(i=0;i<l;i++)
	{
		sum+=cf(a,l-1-i)*zh(c[i]);
	}
	
	
	if(sum==0)
	{
	printf("0");
	}
	
	
	for(i=0;sum!=0;i++)
	{
		t[i]=fzh(sum%b);
		sum=sum/b;
	}
	
	for(j=i-1;j>=0;j--)
	{
		printf("%c",t[j]);
	}

	
	printf("\n");
	
	return 0;
}


