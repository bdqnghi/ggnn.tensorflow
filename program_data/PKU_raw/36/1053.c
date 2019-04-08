/*
 * 1.cpp
 *
 *  Created on: 2011-12-25
 *      Author: Administrator
 */
int main()
{
	int i,l,k;
	int a[200]={0};
	char s1[200],s2[200];
	cin>>s1;
	cin>>s2;
	l=strlen(s1);
	k=strlen(s2);
	if(k!=l){
		cout<<"NO"<<endl;
		return 0;
	}
	memset(a,0,sizeof(a));
	for(i=0;i<l;i++)a[s1[i]]++;
	for(i=0;i<k;i++)a[s2[i]]--;
	for(i=1;i<130;i++)
		if(a[i]!=0){
		
			cout<<"NO"<<endl;
			return 0;
		}
	cout<<"YES"<<endl;
	return 0;
}