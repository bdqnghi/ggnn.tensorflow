
void main()
{
	char a[100],b[100];
	int ans,e,lena,lenb,k,i;
	scanf("%s%s",a,b);
	lena=strlen(a);
	lenb=strlen(b);
	if(lena!=lenb)
		printf("NO");
	else
	{
		for(k=1;k<lena;k++)
		{
			for(i=0;i<lena-k;i++)
			{
				if(a[i]>a[i+1])
				{
					e=a[i+1];
					a[i+1]=a[i];
					a[i]=e;
				}
			}
		}
		for(k=1;k<lenb;k++)
		{
			for(i=0;i<lenb-k;i++)
			{
				if(b[i]>b[i+1])
				{
					e=b[i+1];
					b[i+1]=b[i];
					b[i]=e;
				}
			}
		}
		ans=strcmp(a,b);
		if(ans==0)
			printf("YES");
		else
			printf("NO");
	}
}
