
void main()
{
	int i,j,k,t,l1,l2,l3,judge;
	char s[256],a[256],b[256];
	gets(s);
	l1=strlen(s);
	gets(a);
	l2=strlen(a);
	gets(b);
	l3=strlen(b);
	for(i=0;i<=l1-l2;i++)
	{
		judge=1;
		for(j=0;j<l2;j++)
			if(s[i+j]!=a[j])
			{
				judge=0;
				break;
			}
		if(judge==1)
		{
			t=i;
			break;
		}
	}
	if(judge==1)
		for(k=0;k<l3;k++)
			s[t+k]=b[k];
	puts(s);
}