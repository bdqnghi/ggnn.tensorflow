int main()
{
	char zfc[300]={0};
	char tar[300]={0};
	char rep[300]={0};
	char result[300]={0};

	int len1,len2,ischange = 0;
	int index1=0,i,index2 = 0;

	gets(zfc);
	gets(tar);
	len1 = strlen(tar);
	gets(rep);
	len2 = strlen(rep);
	
	while(zfc[index1] != '\0')
	{
		ischange = 1;
		for(i = 0;i < len1; i++)
		{
			if(zfc[index1 + i] != tar[i])
			{
				ischange = 0;
				break;
			}
		}
		if(ischange)
		{
			for(i = 0;i < len2; i++)
			{
				result[index2 + i] = rep[i];
			}
			index2 += len2;
			index1 += len1;
			while(zfc[index1] != '\0')
			{
				result[index2] = zfc[index1];
				index2++;
				index1++;
			}
			break;
		}
		result[index2] = zfc[index1];
		index2++;
		index1++;
	}
	printf("%s",result);
	return 0;
}
