char s[4000],t[4000];
int a[3000]={0},b[3000]={0},h[1008]={0};
void main()
{
	int i,k,n1,n2;
	gets(s);gets(t);
	n1=strlen(s);
	k=0;
	for(i=0;i<n1;i++)
	{
		
		if(s[i]!=',')
		{
			a[k]=a[k]*10+s[i]-'0';
		}
		else k++;
	}
	n2=strlen(t);
	k=0;
	for(i=0;i<n2;i++)
	{
		
		if(t[i]!=',')
		{
			b[k]=b[k]*10+t[i]-'0';
		}
		else k++;
	}
	printf("%d ",k+1);
	int j;
	for(i=0;i<k+1;i++)
	{
		for(j=a[i];j<b[i];j++)
			h[j]++;
	}
	int y=0;
	for(i=0;i<1000;i++)
		if(h[i]>=y)	y=h[i];
	printf("%d\n",y);
}

