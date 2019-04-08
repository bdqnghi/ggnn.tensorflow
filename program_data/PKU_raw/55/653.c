//????????
int main()
{
	int i,m,len,num,sum=0,n,j=0;//????
	char zi[1000];
	int goal[1000];
	cin>>m>>zi>>n;//??
	len=strlen(zi);
	for(i=0;i<len;i++)
	{
		if(zi[i]>64&&zi[i]<91)
			num=(int)zi[i]-55;
		else if(zi[i]>96&&zi[i]<123)
			num=(int)zi[i]-87;
		else
			num=(int)zi[i]-48;
		sum=sum+num*pow(m*1.0,len-i-1);//??????
	}	
	while(sum>=n)
	{
		goal[j]=sum%n;
		sum=sum/n;
		j++;//???n??
	}
	goal[j]=sum;
	for(i=j;i>=0;i--)
	{
		if(goal[i]>=10)
			cout<<(char)(goal[i]+55);//????
		else 
			cout<<goal[i];
	}
	cout<<endl;
	return 0;
}