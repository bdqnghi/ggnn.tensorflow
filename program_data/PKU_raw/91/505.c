int main()
{
	char a[101],b[101];
	int c[1000];
	int i,num=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
		num=num+1;
	}
	for(i=0;i<num;i++)
	{
		if(i+1==num)
			b[i]=c[0]+c[i];
		else b[i]=c[i]+c[i+1];
			printf("%c",b[i]);
	}
	return 0;


}