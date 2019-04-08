

int main()
{
    char a[1000];
	int n,i;
	gets(a);
	int zimu(char x);
	n=strlen(a);
	for(i=1;i<n-1;i++)
	{
		if(a[i]==' ')
		{
			if(zimu(a[i-1])==1)
			{
              if(zimu(a[i+1])==0) a[i]='1';
			}
			if(zimu(a[i-1])==0)
			{
				if(zimu(a[i+1])==0) a[i]='1';
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!='1') printf("%c",a[i]);
	}
	return 0;
}


int zimu(char x)
{
	int a;
	if((x>=65&&x<=90)||(x>=97&&x<=122)) a=1;
	else a=0;
	return a;
}