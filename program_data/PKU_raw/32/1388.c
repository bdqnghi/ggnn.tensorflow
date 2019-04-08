//**********************************
//??: ?????
//???2013.11.16
//**********************************
int sub(int len,int *an1,int *an2)
{
	int max=0;
	for(int i=0;i<=len;i++)
	{
		an1[i]=an1[i]-an2[i];
		if(an1[i]<0)
		{
			an1[i]=an1[i]+10;
		    an1[i+1]=an1[i+1]-1;
		}
		if(an1[i]!=0)
			max=i;
	}
	return (max);
}
int main() 
{ 
	int n=0,i=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		char bn1[102],bn2[102];
		int j=0,k=0,max=0,an1[102],an2[102];
		cin>>bn1>>bn2;
		memset(an1,0,sizeof(an1));
		memset(an2,0,sizeof(an2));
		for(j=strlen(bn1)-1,k=0;j>=0;j--)
			an1[k++]=bn1[j]-'0';
		for(j=strlen(bn2)-1,k=0;j>=0;j--)
			an2[k++]=bn2[j]-'0';
         max=sub(strlen(bn1),an1,an2);
		 for(j=max;j>=0;j--)
			 cout<<an1[j];
		 cout<<endl;
	}
	return 0;
}