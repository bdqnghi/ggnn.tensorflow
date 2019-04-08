int main()
{
	int n,i,j,count[250]={0},num=0;
	char line[501],n_gram[250][5],temp[5];
	cin >>n;
	cin >>line;    //??
	count[0]=1;
	for (i=0;i<n;i++)
		n_gram[0][i]=line[i];
	n_gram[0][n]='\0';     //???????
	for (i=1;i<strlen(line)-n+1;i++)
	{
		for (j=i;j<i+n;j++)
		{
			temp[j-i]=line[j];
		}
		temp[n]='\0';     //?temp??????
		for (j=0;j<=num;j++)
		{
			if (strcmp(temp,n_gram[j])==0)
			{
				count[j]++;
				break;
			}
		}                  //??????????
		if (j==num+1)
		{
			strcpy(n_gram[num+1],temp);
			count[num+1]=1;
			num++;
		}                  //?????
	}
	int max=0;
	for (i=0;i<=num;i++)
	{
		if (max<count[i])
			max=count[i];
	}                       //????????
	if (max==1)
		cout <<"NO"<<endl;    //?????1??NO
	else
	{
		cout <<max<<endl;
		for (i=0;i<=num;i++)
		{
			if (count[i]==max)
				cout <<n_gram[i]<<endl;
		}
	}                       //??1????????MAX???
	return 0;
}