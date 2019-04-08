int main()
{
	char *str,*p,*start;
	str=(char *)calloc(1000,sizeof(char));
	for (p=str;*(p-1)!='\n';p++)
		scanf("%c",p);
	int countspace=0;
	start=str;

	for (p=str;*p!='\n';p++)
		if (*p==' ')
		{
			if (*(p-1)!=' ') start=p;
			countspace++;
			if (*(p+1)!=' ')
			{
				if (countspace>1)
					for (p=start+1;*(p-1)!='\n';p++)
						*p=*(p+countspace-1);
				countspace=0;
				p=start+1;
			}
		}
	for(p=str;*(p-1)!='\n';p++)
		printf("%c",*p);
	return 0;
}