// 2011???.cpp : ??????????????

int num[100000];
void plu()
{
	int sub[100000];
	for(int i=0;i<110;i++) sub[i]=0;
	int k=0;
	while(num[k]!=-1)
	{
		sub[k]=num[k]*2%10+sub[k];
		sub[k+1]=num[k]*2/10;
		k++;
	}
	int j=60;
	while(sub[j]==0)
		{
			j--;
	    }
	for(int m=j;m>-1;m--)
		num[m]=sub[m];
}
int main()
{
	int n;
	cin>>n;
	if(n==1) {cout<<2;return 0;}
	if(n==0) {cout<<1;return 0;}
	for(int i=0;i<n;i++)
		num[i]=-1;
	num[0]=1;
	for(int j=0;j<n;j++)
	    plu();
    int k=0;
	while(num[k]!=-1)
		k++;
	for(int l=k-1;l>-1;l--)
		cout<<num[l];
	
	return 0;
}