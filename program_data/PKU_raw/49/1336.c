int panduan(char *c,int l)
{
	int f=0,t=0,i;
	if(l%2==0)
	{
		for(i=0;i<=(l/2)-1;i++)
		{
			if(*(c+i)==*(c+l-1-i))
				f+=1;
		}
		if(f==l/2)
			t=1;
	}
	else
	{   f=0;
		for(i=0;i<=(l-3)/2;i++)
		{
			if(*(c+i)==*(c+l-1-i))
				f+=1;
		}
		if(f==(l-1)/2)
			t=1;
	}
	return(t);
}
int main()
{
	int n,*p,i,l,f,k;
	char c[100];
	int panduan(char *c,int l);
	gets(c);
	n=strlen(c);
	for(i=2;i<=n;i++)
	{
		for(l=0;l<=n-1;l++)
		{
			p=&c[l];
			f=panduan(p,i);
			if(f==1)
			{
				for(k=l;k<=l+i-2;k++)
				{
					printf("%c",c[k]);
				}
				printf("%c\n",c[l+i-1]);
			}
		}
	}
	return 0;
}




