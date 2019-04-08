void main()
{
	char a[1000];
	int i,b[100][100],c[100]={0},t[100]={0},j=0,s,p,n,max=0,min=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		while(i<n&&a[i]!=',')
		{
			b[j][t[j]]=a[i]-'0';
			t[j]++;
			i++;
		}
		j++;
	}
	for(i=0;i<j;i++)
	{
		p=1;
		for(s=t[i]-1;s>=0;s--)
		{
			c[i]=c[i]+b[i][s]*p;
			p=p*10;
		}
		max=(max>=c[i])?max:c[i];
	}
	for(i=0;i<j;i++)
		if(c[i]!=max)min=(min>=c[i])?min:c[i];
	if(min==0)printf("No");
	else
	{
		for(i=0;i<j;i++)
			if(c[i]==min)
			{
				printf("%d",c[i]);
				break;
			}
	}
}

		


	
