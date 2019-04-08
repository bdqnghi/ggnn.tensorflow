int main ( )
{
	char sen_1[80]="\0",sen_2[80]="\0";
	int i,sum=0;
	gets(sen_1);
	gets(sen_2);
	for (i=0;i<80;i++)
	{
		if(sen_1[i]>='A'&&sen_1[i]<='Z')
			sen_1[i]=sen_1[i]+32;
		if(sen_2[i]>='A'&&sen_2[i]<='Z')
			sen_2[i]=sen_2[i]+32;
		if(sen_1[i]>sen_2[i])
		{
			printf(">\n");
			sum=sum+1;
			break;
		}
		else if(sen_1[i]<sen_2[i])
		{
			printf("<\n");
			sum=sum+1;
			break;
		}
		else
			sum=sum;
	}
	if(sum==0)
		printf("=\n");
	return 0;
}