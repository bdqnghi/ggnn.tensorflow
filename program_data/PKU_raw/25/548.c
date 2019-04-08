/*
 * 2mi.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
int main()
{
	int n,i,s[100],j;
	for(i=0;i<100;++i)
		s[i]=0;
	s[0]=1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<100;j++)
		{
			s[j]=2*s[j];
		}		
		for(j=0;j<100;j++){
		if(s[j]>9)
			{
				s[j+1]=s[j+1]+1;
				s[j]=s[j]%10;
			}}

	}
	for(i=99;i>=0;i--)
		if(s[i]!=0)
			break;
		
	for(j=i;j>=0;j--)
		cout<<s[j];
cin>>n;
	return 0;
}
