/*
 * FamousPerson.cpp
 *
 *  Created on: 2013-12-13
 *      Author: KEVIN
 */


int main()
{
	int n;
	cin>>n;
	struct{int knows,known;} person[n];
	memset(person,0,sizeof(person));
	while(1)
	{
		int i,j;
		cin>>i>>j;
		if(i==j)break;
		person[i].knows++;
		person[j].known++;
	}
	for(int i=0;i<=n-1;++i)
	{
		if(person[i].known==n-1 && person[i].knows<n-1)
		{
			cout<<i;
			break;
		}
		else
		{
			if(i==n-1)cout<<"NOT FOUND";
		}
	}
	return 0;
}