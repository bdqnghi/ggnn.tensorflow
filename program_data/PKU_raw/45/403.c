
void main()
{
	char a[50],b[50];
	char *pa,*pb;
	scanf("%s%s",a,b);
	for(pb=b,pa=a;pb<b+strlen(b);)
	{
		if(*pb==*pa)
		{
			for(pa=a;pa<strlen(a)+a;pa++)
			{
				if(*pa==*pb) pb++;
				else break;
			}
			if(pa=a+strlen(a)) printf("%d",pb-b-strlen(a));
			else pa=a;
		}
		else pb++;
	}
}