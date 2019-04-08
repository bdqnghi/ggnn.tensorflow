/*
 * p3.cpp
 *
 *  Created on: 2010-11-20
 *      Author: jsgl
 */
int main()
{
	int z,q,s,l,i;
	for(z=10;z<=50;z=z+10)              //??
    for(q=10;q<=50;q=q+10) {if(z==q) continue;
	for(s=10;s<=50;s=s+10) {if(z==s||q==s) continue;
	for(l=10;l<=50;l=l+10)  {if(z==l||q==l||s==l)continue;
	{
	if((z+q==s+l)&&(z+l>q+s)&&(z+s<q))          //??

		{
		char k[100];
	k[z]='z';k[q]='q';k[l]='l';k[s]='s';          //??
	for(i=50;i>=10;i=i-10)
	if(i==z||i==q||i==s||i==l)
	cout<<k[i]<<' '<<i<<endl;
					}

				}}}}
	return 0;
}
