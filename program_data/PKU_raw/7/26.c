int main()
{
	int i,j,a=1,m,k;
	char s1[258],s2[258],s3[258];
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%s",s3);
	for(i=0;s1[i]!='\0';i++)
	{
		if(a==1)
		{
			k=i;
			for(j=0;s2[j]!='\0';j++)
			{
				if(s2[j]!=s1[k])
				{
					a=1;
					break;
				}
				k++;
				a=0;
			}
		}
		else
			break;
	}
	if(a==0)
	{
		for(m=0;s3[m]!='\0';m++)
		{
			s1[i-1]=s3[m];
			i++;
		}
	}
	printf("%s",s1);
	return 0;
}