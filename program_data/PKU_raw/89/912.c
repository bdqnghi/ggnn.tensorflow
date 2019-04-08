/*
 * 1.cpp
 *
 *  Created on: 2011-12-19
 *      Author: 1100012870
 */
int whoknow[1000000]={0},knowwho[1000000]={0};
int main()
{
	int i,n,x,y;
	cin>>n;
	cin>>x>>y;
	while(!(x==0 && y==0)){
		whoknow[y]++;
		knowwho[x]++;
		cin>>x>>y;
	}
	for(i=0;i<=n;i++)
		if(knowwho[i]==0 && whoknow[i]==n-1){
			cout<<i<<endl;
			return 0;
		}
	cout<<"NOT FOUND"<<endl;
	return 0;
}