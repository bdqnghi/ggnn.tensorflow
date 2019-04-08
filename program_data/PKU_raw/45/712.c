int main()
{
	char a[51],b[51];
	int l1,l2,i,j;
	scanf("%s%s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	for(i=0;i<l1;i++)
	{
		if(b[i]!=a[0])
			continue;
		else 
		{
			for(j=i;j<=i+l2-1;j++)
			{
				if(a[j-i]!=b[j])
					break;
			}
			if(j>i+l2-1)
				break;
		}
	}
	printf("%d",i);
	return 0;
}