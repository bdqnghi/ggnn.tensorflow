
int main()
{
	int flag=1;
	char s1[M],s2[M];
	unsigned int t1,t2,i,j,k;
	scanf("%s %s",s1,s2);
	t1=strlen(s1);
	t2=strlen(s2);
	if(t1!=t2) printf("NO\n");
	else
	{
		for(i=0;i<t1;i++)
		{
			for(j=0;j<strlen(s2);j++)
		 	if(s2[j]==s1[i])
		 	{
		 		for(k=j;k<=strlen(s2);k++)
		 			s2[k]=s2[k+1];
		 	}
		 
		}
		if(!strlen(s2)) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
	