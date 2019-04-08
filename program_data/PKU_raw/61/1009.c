//============================================================================
// Name        : shulie.cpp
// Author      : shaodian
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================


int main() {
	int s[100]={0};//???????100???
	int n=0;
	cin>>n;
	for(int i=0;i<n;i++)//?i??1?i??
	{	cin>>s[i];
	if (s[i]==1||s[i]==2)cout<<1<<endl;//???????????????1

	else
	{long long int f[10000];//????????
    f[1]=1;f[2]=1;
    for(int j=3;j<=s[i];j++)//?j??3?????s[i]???
    {
    	f[j]=f[j-1]+f[j-2];//???????????
    }

	cout<<f[s[i]]<<endl;}
	}

	return 0;
}