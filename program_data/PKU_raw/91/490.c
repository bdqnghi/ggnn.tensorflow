	int main()
	{
		char a[3000],b[30000];
		int i,k=0,q=0,t=0,w=0;
		gets(a);
		w=strlen(a);
		for(i=0;a[i]!='\0';i++)
		{
			b[i]=a[i]+a[i+1];
		}
		b[w-1]=a[0]+a[w-1];
		b[w]='\0';
		puts(b);
		return 0;
	}
 