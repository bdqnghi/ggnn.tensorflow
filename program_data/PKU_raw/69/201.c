int main()
{
	int i,k;
	char s1[251],s2[251];
	int num_1[251]={0},num_2[251]={0};
	int len_1,len_2,len;
	int state=0;

	gets(s1);
	gets(s2);
	len_1=strlen(s1);
	len_2=strlen(s2);
	len=(len_1>len_2)?len_1:len_2;
	for(i=len_1-1,k=0;i>=0;i--)
		num_1[k++]=s1[i]-'0';
	for(i=len_2-1,k=0;i>=0;i--)
		num_2[k++]=s2[i]-'0';
	for(i=0;i<len;i++)
	{
		if(num_1[i]+num_2[i]>=10)
		{
			num_1[i]=(num_1[i]+num_2[i])%10;
			num_1[i+1]+=1;
		}
		else 
			num_1[i]=num_1[i]+num_2[i];
	}
	for(i=len;i>=0;i--)
	{
		if(len==1&&num_1[0]==0){
			printf("0");
			break;
		}
		else if(state==0&&num_1[i]==0)
			continue;
		state=1;
		printf("%d",num_1[i]);
	}
	printf("\n");
	return 0;
}