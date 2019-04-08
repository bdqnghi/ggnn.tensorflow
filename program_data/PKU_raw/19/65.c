int main ( )
{
	char sen[1000]="\0";char word_1[101]="\0";char word_2[101]="\0";char word_1_1[101]="\0";
	int number[101]={0};
	int i,j,k;int sum;int num=0;int m=0;
	gets(sen);gets(word_1);gets(word_2);
	for(i=0;i<=strlen(sen)-strlen(word_1);i++)
	{
		sum=0;
		for(j=0;j<=strlen(word_1)-1;j++)
			word_1_1[j]=sen[j+i];
		for(j=0;j<=strlen(word_1)-1;j++)
		{
			if(word_1_1[j]!=word_1[j])
				sum=sum+1;
		}
		if((sum==0)&&(i!=0)&&(sen[i-1]!=' '))
			sum=sum+1;
		if(sum==0)
		{
			number[m]=i;m=m+1;num=num+1;
		}
	}
	for(k=1;k<=num;k++)
	{
		
		if(k==1)
			for(j=0;j<number[k-1];j++)
				printf("%c",sen[j]);
		if(k!=1)
			for(j=number[k-2]+strlen(word_1);j<number[k-1];j++)
				printf("%c",sen[j]);
		for(j=0;j<strlen(word_2);j++)
			printf("%c",word_2[j]);
		if(k==num)
		{
			if(number[k-1]+strlen(word_1)==strlen(sen))
				printf("\n");
			else
			{
				for(j=number[k-1]+strlen(word_1);j<strlen(sen);j++)
				{
					
					if(j==strlen(sen)-1)
						printf("%c\n",sen[j]);
					else
						printf("%c",sen[j]);
				}
			}
		}
	}
		
	if(num==0)
		printf("%s\n",sen);
	return 0;
}

