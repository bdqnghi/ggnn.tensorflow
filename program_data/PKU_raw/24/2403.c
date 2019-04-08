int main()
{
	char a[10000];
	int i,j,max=0,min=1000,t=0,len,p=1,q=1;
	gets(a);
	len=strlen(a);
	for(i=0;i<=len;i++)
	{   
		if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
		{
			t++;
		}
		else if((a[i-1]>='A'&&a[i-1]<='Z')||(a[i-1]>='a'&&a[i-1]<='z'))
		{
			if(t<min)
			{
				p=i-t;
				min=t;
			}
			if(t>max)
			{
				q=i-t;
				max=t;
			}
			t=0;
		}
	}
	for(i=q;i<max+q;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
	for(i=p;i<p+min;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
