int h[100],s[100]={0},n;
int p(int i)
{
	int s1=0,s2,j;
	if(s[i]==0)
	{
		
		for(j=i+1;j<n;j++)
		{    s2=s1;
			if(h[i]<h[j])
				s1=0;
			else
				s1=p(j)+1;
			if(s1<s2)s1=s2;
		}
		s[i]=s1;
	}
	else
		s1=s[i];

	return(s1);
}
void main()
{
	int i,s1=0,s2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&h[i]);
    for(i=0;i<n;i++)
	{
		s2=s1;
		s1=p(i);
		if(s1<s2)
			s1=s2;
	}
	printf("%d",s1+1);
}

