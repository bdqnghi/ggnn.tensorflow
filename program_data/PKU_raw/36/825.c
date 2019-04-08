void main()
{
	int n1,n2,i,j,p=0;
	int a[100];
	char s1[100],s2[100];
	scanf("%s %s",s1,s2);
	n1=strlen(s1);
	n2=strlen(s2);
	for(i=0;i<n1;i++)
		a[i]=1;
	if(n1!=n2)
		printf("NO");
	else
	{
	  i=0;
	  while(i<n1)
	  {
		for(j=0;j<n2;j++)
			if(s1[i]==s2[j]&&a[j]!=0)break;
		if(j>=n2)
			i=n1;
		else
		{
			a[j]=0;
			p++;
		}
		i++;
	  }
	  if(p==n1) printf("YES");
	  else printf("NO");
	}
}