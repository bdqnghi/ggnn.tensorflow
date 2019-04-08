int main()
{
	char a[1001];
	scanf ("%s",a);
	int i;
	for (i=0;i<strlen(a);i++)
	{
		if (a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-'a'+'A';
	}
	int t=1;
	for (i=0;i<strlen(a);i++)
	{
		if (a[i]==a[i+1])
		{
			t++;
		}
		else
		{
			printf ("(%c,%d)",a[i],t);
			t=1;
		}
	}

}