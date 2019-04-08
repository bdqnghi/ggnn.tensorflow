void main()
{
	int n1,n2,b[100],i,j,p=0;
	char s1[100],s2[100];
    scanf("%s %s",s1,s2);
	n1=strlen(s1);
	n2=strlen(s2);
	for(i=0;i<n1;i++)
	{
		b[i]=1;
	}
	if(n1!=n2)
	{
		printf("NO");
	}
	else 
	{
		i=0;
		while(i<n1)
		{  
			for(j=0;j<n1;j++)
			       if(s1[i]==s2[j]&&b[j]==1)break;
		    if(j<n1)
			 {
				p++;
	           b[j]=0;
			 }
			else 
			{
				i=n1;
			}
			i++;
		}
		if(p==n1)printf("YES");
		else printf("NO");
	}
}