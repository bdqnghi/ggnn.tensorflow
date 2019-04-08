void sub(char common[],char minlen[],int n,int now)
{
	char *a,*b;
	for(a=common,b=minlen+now;a<common+n;a++,b++)
	{
		*a=*b;
	}
	*a='\0';
}
int compare(char a[],int n)
{
	int i,flag=1;
	for(i=0;i<strlen(a)/2;i++)
	{
		if(a[i]!=a[strlen(a)-i-1])
		{
			flag=0;
			break;
		}
	}
	return flag;
}
int main()
{
	void sub(char common[],char minlen[],int n,int now);
	int compare(char a[],int n);
	char str[500];
	scanf("%s",str);
	int i,j;
	if(strlen(str)>1)
	{
		for(i=2;i<=strlen(str);i++)
		{
			for(j=0;j<strlen(str)-i+1;j++)
			{
				char substr[500];
				sub(substr,str,i,j);
				if(compare(substr,i)==1)
				{
					printf("%s\n",substr);
				}	
			}
		}
	}
	return 0;
}