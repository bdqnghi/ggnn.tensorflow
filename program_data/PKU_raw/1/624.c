/*
 *  Created on: 2011-11-18
 *      Author: 1100012870
 */

int su[40000],b[10000],ans;

void zhaosushu()
{
	int i,j,p;
	for(i=2;i<32768;i++)
	{
		p=1;
		for(j=2;j<=sqrt(i);j++)
			if(i%j==0){
				p=0;
				break;
			}
		if(p==0)continue;
		su[p]=1;
	}
}

void resolve(int a,int x)
{
	int i;
	if(a==1 || (su[a]==1 && a>=b[x-1])) {
		ans++;
		return;
	}
	for(i=2;i<=a;i++)
		if(a%i==0 && i>=b[x-1]){
			b[x]=i;
			resolve(a/i,x+1);
			b[x]=0;
		}
}

int main()
{
	int n,i,a;
	memset(su,0,sizeof(su));
	zhaosushu();
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		ans=0;
		memset(b,0,sizeof(b));
		resolve(a,1);
		cout<<ans<<endl;
	}
	return 0;
}