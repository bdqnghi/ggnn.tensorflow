void subtract();
const int maxlen=100;
int main()
{
	int n,i;
	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		subtract();
		cin.get();
	}
	return 0;
}
void subtract()
{
	char str1[maxlen+1],str2[maxlen+1];
	int a1[maxlen],a2[maxlen];
	int len1,len2;
	memset(a1,0,sizeof(a1));
	memset(a2,0,sizeof(a2));
	cin.getline(str1,maxlen+1);//???????
	cin.getline(str2,maxlen+1);
	len1=strlen(str1);
	len2=strlen(str2);
	int i,j;
	for(i=0,j=len1-1;j>=0;j--)//????????????,??????,??????????
		a1[i++]=str1[j]-'0';
	for(i=0,j=len2-1;j>=0;j--)
		a2[i++]=str2[j]-'0';
	for(i=0;i<maxlen;i++)
	{
		if(a1[i]>=a2[i])
			a1[i]=a1[i]-a2[i];
		else
		{
			a1[i+1]=a1[i+1]-1;
			a1[i]=a1[i]+10-a2[i];
		}
	}
	i=maxlen-1;//?????????????0??,?????
	while(a1[i]==0)
		i--;
	for(j=i;j>=0;j--)
		cout<<a1[j];
	cout<<endl;
}