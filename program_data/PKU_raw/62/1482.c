int main()
{
	char *str,*p,*start;
	str=(char *)calloc(1000,sizeof(char));
	gets(str);

	int countspace=0;
	start=str;

	for (p=str;*p!='\0';p++)
		if (*p==' ')
		{
			if (*(p-1)!=' ') start=p;
			countspace++;
			if (*(p+1)!=' ')
			{
				if (countspace>1)
					for (p=start+1;*(p-1)!='\0';p++)
						*p=*(p+countspace-1);
				countspace=0;
				p=start+1;
			}
		}

	puts(str);
	free(str);
	return 0;
}