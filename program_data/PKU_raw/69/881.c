const int maxlen=250;
int main()
{
	char num1[maxlen+1];
	char num2[maxlen+1];
	int a[maxlen];
	int b[maxlen];
	int len1,len2;
	cin.getline(num1,maxlen+1);
	cin.getline(num2,maxlen+1);
	len1=strlen(num1);
	len2=strlen(num2);
	int j=0;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i=len1-1;i>=0;i--)
	{
		a[j]=num1[i]-'0';
		j++;
	}
	j=0;
	for(int i=len2-1;i>=0;i--)
	{
		b[j]=num2[i]-'0';
		j++;
	}
	for(int i=0;i<maxlen;i++)
	{
		a[i]+=b[i];
		if(a[i]>=10)
			{
				a[i]-=10;
	            a[i+1]++;
	     	}
	}
   int i=maxlen-1;
while(a[i]==0) i--;
if(i>=0)
for(;i>=0;i--)
	cout<<a[i];
else
	cout<<"0";
cout<<endl;
return 0;
}