//0507
//#include <queue>
//#include <map>
//#include <set>
const int MAX = 250;
char c1[MAX]={0};
char c2[MAX]={0};
//int a1[MAX]={0};
int a2[MAX]={0};
int re[MAX]={0};
int main()
{
	memset(a2,0,sizeof(a2));
	memset(re,0,sizeof(re));
	cin>>c1>>c2;
	//if(strcmp(c1,"0")==0&&c2=='0')
	int l1=strlen(c1); int l2=strlen(c2);
	int i,j;
	for(i=0;i<l1;i++)
		re[i]=c1[l1-i-1]-'0';
	for(i=0;i<l2;i++)
		a2[i]=c2[l2-i-1]-'0';
	int l;
	if(l1>=l2)
		l=l1;
	else
		l=l2;
	for(i=0;i<=l;i++)
	{
		re[i]=re[i]+a2[i];
		while(re[i]>=10)
		{
			re[i]-=10;
			re[i+1]+=1;
		}
	}
	i=201;
	while(re[i]==0&&i>-1)
		i--;
	if(i==-1)
		cout<<0;
	for(j=i;j>=0;j--)
		cout<<re[j];
	//cout<<endl;
	return 0;
}