int main()
{
	char sentence[500];
	int i,j=0,len,kong=0,shuliang,num[50]={0},max=0,k,r,min=100,qian1=0,qian2=0;
	gets(sentence);
	len=strlen(sentence);
	for(i=0;i<len;i++)
	{
		if(sentence[i]==' ')
			kong++;
	}
	shuliang=kong+1;
	
	for(i=0;i<shuliang;i++)
	{
		for(;j<len;j++)
		{
			if(sentence[j]!=' ')
				num[i]++;
			else
			{
				j++;
				break;
			}
		}
	}
	for(i=0;i<shuliang;i++)
	{
		if(num[i]>max)
		{
			k=i;
			max=num[i];
		}
		if(num[i]<min)
		{
			r=i;
			min=num[i];
		}
	}
	for(i=0;i<k;i++)
		qian1=qian1+num[i];
	for(i=0;i<r;i++)
		qian2=qian2+num[i];
	for(i=qian1+k;i<num[k]+qian1+k;i++)
		printf("%c",sentence[i]);
	printf("\n");
	for(i=qian2+r;i<num[r]+qian2+r;i++)
		printf("%c",sentence[i]);
	printf("\n");
	return 0;
}