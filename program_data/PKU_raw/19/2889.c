char temp[1000];
char test[1000][1000];
char s[1000];
char d[1000];
char now[1000];
int main()
{
	//freopen("D:\\1.txt","r",stdin);
	cin.getline(temp,1000);
	cin>>s;
	cin>>d;
	memset(test,0,sizeof(test));
	int length=strlen(temp);
	int i;
	int j=0;
	int k=0;
	for(i=0;i<length;i++)
	{
		if(temp[i]!=' ')
			now[j++]=temp[i];
		else
		{
			strcpy(test[k],now);
			memset(now,0,sizeof(now));
			j=0;
			k++;
		}
	}
   strcpy(test[k],now);
	for(i=0;i<=k;i++)
	{
		if(strcmp(test[i],s)==0)
			strcpy(test[i],d);
	}
	for(i=0;i<=k;i++)
	{
		if(i!=k)
		cout<<test[i]<<" ";
		else
			cout<<test[i]<<endl;
	}
	return 0;
}