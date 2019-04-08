int main()
{
	int i,j,n,m,a;
	char s1[50],s2[50];
	scanf("%s %s",s1,s2);
	n=strlen(s1);
	m=strlen(s2);
	for(j=0;j<m;j++)
	{
		if(s1[0]!=s2[j])
			continue;
		a=j;
		if(s1[0]==s2[j])
		{
			for(i=1;i<n;i++,j++)
			{
				if(s1[i]!=s2[j+1])break;
			}		
		}
		break;
	}
	printf("%d\n",a);
	return 0;
}
