
void main()
{
	int i,j,l;
	char a[100],p;
	scanf("%s",a);
	p=a[0];
	l=strlen(a);
	for(i=1;i<l;i++)
	{
		if(a[i]!=p)
		{
			for(j=i;j>=0;j--)
			{
				if(a[j]==p)
				{
					printf("%d %d\n",j,i);
					a[j]=0;
					break;
				}
			}
		}
	}
}