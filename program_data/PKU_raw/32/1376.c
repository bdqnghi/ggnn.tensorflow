
int main()
{ 	int n;
cin>>n;
   for(int t=0;t<n;t++)
	{cin.get();
		const int MAX_LEN = 200;
	int an1[MAX_LEN]; int an2[MAX_LEN];
	char seLine1[MAX_LEN + 1]; char seLine2[MAX_LEN + 1];
	
	cin.getline(seLine1, MAX_LEN + 1);
	cin.getline(seLine2, MAX_LEN + 1);
	int nLen1 = strlen(seLine1);
	int nLen2 = strlen(seLine2);
	//cout<<seLine1<<endl<<seLine2<<endl;
	memset(an1, 0, sizeof(an1));
	memset(an2, 0,sizeof(an2));
   	int i, j=0;
	for (i = nLen1-1;  i>=0; i--)
		an1[j++] = seLine1[i] - '0'; 
	j=0;
	for (i = nLen2-1; i>=0;i--)
		an2[j++] = seLine2[i] - '0';
	for (i = 0; i < MAX_LEN ;i++)
	{
		//printf("%d %d %d ",i, an1[i], an2[i]);
		if(an1[i]>=an2[i])
			an1[i]-=an2[i];
		else{
		     an1[i]=10+an1[i]-an2[i];
			 an1[i+1]-=1;
		}
		//printf("aa%d %d\n", i, an1[i]);
	}
	i = MAX_LEN - 1;
	while(an1[i]==0) i--;
	//cout<<i<<endl;
	for(;i >= 0; i--)
		cout << an1[i]; 
	cout << endl;
   }
	return 0;
}

