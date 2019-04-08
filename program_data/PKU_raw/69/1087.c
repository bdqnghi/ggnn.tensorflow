int main()
{
 	const int MAX_LEN=200;
	unsigned an1[MAX_LEN];
	unsigned an2[MAX_LEN];
	char seLine1[MAX_LEN+1]; 
	char seLine2[MAX_LEN+1];
	cin.getline(seLine1,MAX_LEN+1);
	cin.getline(seLine2,MAX_LEN+1);
	int nLen1 = strlen(seLine1);
	int nLen2 = strlen(seLine2);
	memset(an1,0,sizeof(an1));
	memset(an2,0,sizeof(an2));
	int i,j=0;
	for(i=nLen1-1;i>=0;i--)
		an1[j++]=seLine1[i]-'0';
	j=0;
	for(i=nLen2-1;i>=0;i--)
		an2[j++]=seLine2[i]-'0';
	for(i=0;i<MAX_LEN;i++)
	{
		an1[i]+=an2[i];
		if(an1[i]>=10)
		{
			an1[i]-=10;
			an1[i+1]++;
		}
	}
	i=MAX_LEN-1;
	while(an1[i]==0) i--;
	if(i>=0)
	{
	for(;i>=0;i--)
		cout<<an1[i];
	}
	else cout<<0;
	cout<<endl;
	return 0;
}
