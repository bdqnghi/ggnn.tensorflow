int main()
{
	int l,t=0,i,j;
	char a[101]={0};
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if (a[i]==' ')
		{
			if(t==1)
			{
				for (j=i;j<l;j++)
					a[j]=a[j+1];
				i=i-1;
			}
			t=1;
		}
		else t=0;
	}
	printf("%s",a);
}