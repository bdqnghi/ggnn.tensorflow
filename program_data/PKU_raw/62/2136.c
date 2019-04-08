int main()
{
	char a[500],b=' ';
    int i;
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		while((a[i]==b)&&(a[i+1]==b))
		{
			i++;
		}
		printf("%c",a[i]);
    }
}