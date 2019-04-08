void main()
{
	char str[1000], letter[1000]={'\0'};
	int i, j, times[1000];
	for(i=0; i<1000; i++)
		times[i]=1;
	scanf("%s",str);
	for(i=0, j=0; str[i]!='\0'; i++)
	{
		if(str[i]==str[i+1] || str[i]==str[i+1]+32 || str[i]==str[i+1]-32)
		{
			times[j]++;
		}
		else
		{
			if(str[i]>=65 && str[i]<=90)
				letter[j]=str[i];
			else
				letter[j]=str[i]-32;
			j++;
		}
	}
	for(j=0; letter[j]!='\0'; j++)
		printf("(%c,%d)",letter[j],times[j]);
	printf("\n");
}