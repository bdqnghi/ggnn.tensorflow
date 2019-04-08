void main()
{
	char s1[100],s2[100];
	int n1,n2,i,t,c1[128],c2[128];
	scanf("%s %s",s1,s2);
	for(i=0;i<128;i++) c1[i]=c2[i]=0;
	n1=strlen(s1);
	n2=strlen(s2);
	if(n1!=n2) printf("NO");
	else 
	{
		for(i=0;i<n1-1;i++)
		{
			t=s1[i];
			c1[i]++;
		}
		for(i=0;i<n2-1;i++)
		{
			t=s2[i];
			c2[i]++;
		}
		for(i=0;i<128;i++)
		{
			if(c1[i]!=c2[i]) break;
		}
		if(i==128) printf("YES");
		else printf("NO");
	}
}