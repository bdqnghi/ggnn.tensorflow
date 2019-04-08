void main()
{
	int n,k,len = 0;
	char str1[30],str2[30];
	gets(str1);
	gets(str2);
	len = strlen(str1); 
	k=0;
	while (k>=0)
	{
		n=str1[k]-str2[k];
		k++;

		if (n==-32)
			continue;
		if (n==32)
			continue;
		if (n>32)
		{
			printf(">");
			break;
		}
		if (n<-32)
		{
			printf("<");
			break;
		}
                  if (n<0)
                  {
                            printf(">");
			break;
                   }
                   if (n>0)
                  {
                            printf("<");
			break;
                   }


		if (k==len)
		{
			printf("=");
			break;
		}
			}
}

