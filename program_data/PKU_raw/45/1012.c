void main()
{
	char s1[50],s2[50],*p;
	int i,j,k;
	scanf("%s%s",s1,s2);
	for(i=0;s2[i]!='\0';i++)
	{
		p=&s2[i];
		for(j=0;s1[j]!='\0';j++)
			if(*p!=s1[j])break;
			else p++;
		if(s1[j]=='\0')
		{
			k=i;
			break;
		}
	}
	printf("%d",k);
}