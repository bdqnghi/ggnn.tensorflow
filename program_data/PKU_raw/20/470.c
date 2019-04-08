void main()
{
	int len,k;
	char s1[12],s2[5],s3[20];
	while (scanf("%s%s",s1,s2)!=EOF)
	{
		int point,i;
		char record;
		len=strlen(s1);
		record=s1[0];
		point=0;
		k=0;
		for(i=0;i<=len-1;i++)
		{
			if(s1[i]>record)
			{
				record=s1[i];
				point=i;
			}
		}
		for(i=0;i<=point;i++)
		{
			s3[k]=s1[i];
			k++;
		}
		for(i=0;i<=strlen(s2)-1;i++)
		{
			s3[k]=s2[i];
			k++;
		}
		for(i=point+1;i<=len-1;i++)
		{
			s3[k]=s1[i];
			k++;
		}
		s3[k]='\0';
		printf("%s",s3);
		printf("\n");
	}
}