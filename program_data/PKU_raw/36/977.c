void main()
{
	int n,m;
	char s1[100],s2[100];
	scanf("%s%s",s1,s2);
	n=strlen(s1);
	m=strlen(s2);
	if(n!=m)
		printf("NO");
	else
	{
		int i,j,q=0;
		for(i=0;i<n;i++)
		{
			int k=0,p=0;
			for(j=0;j<n;j++)
			{
				if(s1[j]==s1[i])
					k=k+1;
			}
			for(j=0;j<n;j++)
			{
				if(s2[j]==s1[i])
					p=p+1;
			}
			if(p!=k)
			{
				q=1;break;
			}
		}
		if(q==0)
			printf("YES");
		else
			printf("NO");
	}
}
		
			
			

	
