int main()
{
	int money,sum=0;
	int num[6]={0,0,0,0,0,0};
	cin>>money;
	while(sum+100<=money)
	{sum+=100;num[0]++;}
	while(sum+50<=money)
	{sum+=50;num[1]++;}
	while(sum+20<=money)
	{sum+=20;num[2]++;}
	while(sum+10<=money)
	{sum+=10;num[3]++;}
	while(sum+5<=money)
	{sum+=5;num[4]++;}
	while(sum+1<=money)
	{sum+=1;num[5]++;}
	for(int i=0;i<6;i++)
		cout<<num[i]<<endl;
	return 0;
}


	