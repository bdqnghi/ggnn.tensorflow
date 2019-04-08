int main()
{
	char a[256],b[256],c[256];
	int i,j,lena,lenb;
	scanf("%s%s%s",a,b,c);
	lena=strlen(a);
	lenb=strlen(b);
	a[lena]='\0';
    int x,s;
	for(i=0;i<lena;i++)
	{
		x=-1;
		for(j=0;j<lenb;j++)
		{
			if(a[i+j]!=b[j])
			{
				x=0;
				break;
			}
		}
		if(x!=0)
		{
			s=i;
			break;
		}
	}
	if(x==0)
		printf("%s",a);
	else
	{
		for(i=0;i<s;i++)
			printf("%c",a[i]);
		printf("%s",c);
		for(i=s+lenb;i<lena;i++)
		{
			printf("%c",a[i]);
		}
	}
	return 0;
}
