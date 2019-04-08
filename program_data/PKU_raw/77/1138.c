int main()
{
    int n,i,j;
	char a[100],m;
	gets(a);
	n=strlen(a);
	m=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]!=m)
		{
			for(j=i-1;j>=0;j--)
			{
				if(a[j]==m)
				{
					printf("%d %d\n",j,i);
					a[i]=' ';
					a[j]=' ';
					break;
				}
			}
		}
	}
	return 0;
}
