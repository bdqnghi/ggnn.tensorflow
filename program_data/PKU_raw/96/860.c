/*
 * yuesefuwenti.cpp
 *
 *  Created on: 2012-12-8
 *      Author: wenjun
 */
int main ()
{
	char a[110];
	int *p;
	int b[110],x,len;
	while(cin>>a){
		len=strlen(a);
	for(int i=0;i<len;i++)
		b[i]=a[i]-'0';
	//for(int i=0;i<len;i++)
		//	cout<<b[i];
	x=0;
	for(int i=0;i<len;i++)
	{
		b[i]=10*x+b[i];
		x=b[i]%13;
		b[i]=b[i]/13;

	}
	int k=0;
	while(b[k]==0)
		k++;
	if(k==len)  cout<<"0";
	for(int i=k;i<len;i++)
		cout<<b[i];
	cout<<endl;
	cout<<x<<endl;
    }
	return 0;
}
