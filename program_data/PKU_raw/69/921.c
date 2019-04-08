const int LEN=301;
int main()
{
	char ch1[LEN]={0},ch2[LEN]={0};
	int an1[LEN]={0},an2[LEN]={0};
	memset(an1,0,sizeof(an1));
	memset(an2,0,sizeof(an2));
	cin.getline(ch1,LEN,'\n');
	cin.getline(ch2,LEN,'\n');
	int i,j=0;
	for(i=strlen(ch1)-1;i>=0;i--)
		an1[j++]=ch1[i]-'0';
	j=0;
	for(i=strlen(ch2)-1;i>=0;i--)
		an2[j++]=ch2[i]-'0';
	for(i=0;i<LEN;i++)
	{
		an1[i]+=an2[i];
		if(an1[i]>=10)
		{
			an1[i]-=10;
			an2[i+1]+=1;
		}
	}
	int judge=0;
	for(i=LEN-1;i>=0;i--)
	{
		if(an1[i]!=0)
		{
			for(;i>=0;i--)
				cout<<an1[i];
			cout<<endl;
			judge=1;
			break;
		}
	}
	if(judge==0)
		cout<<"0"<<endl;
	
	return 0;
}	