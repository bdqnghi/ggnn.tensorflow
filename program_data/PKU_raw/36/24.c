main()
{
	int i,j,k,cont=0;
	char s1[100],s2[100];
	scanf("%s %s",s1,s2);
	for(i=0;s1[i]!='\0';)
		i++;
	for(k=0;s2[k]!='\0';)
		k++;
	if(i!=k)
		printf("NO");
	else
	{
		for(i=0;i<k;i++)
		{
			for(j=0;j<k;j++)
			{
				if(s1[i]==s2[j])
				{
					cont++;
					break;
				}
			}
		}
		if(cont==k)
			printf("YES");
		else
			printf("NO");
	}
}