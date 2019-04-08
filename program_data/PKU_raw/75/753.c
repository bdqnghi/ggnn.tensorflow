/*
 * intergratedexercise1.14.cpp
 *
 *  Created on: 2014-1-4
 *      Author: st
 */
int main()
{
	int in[10000],out[10000];
	cin>>in[0];
	int i,l,j=1,k=1;
	while(scanf(",%d",&in[j++]));
	cin>>out[0];
	while(scanf(",%d",&out[k++]));
	int min=in[0],max=out[0];
	for(i=0;i<j;i++)
		if(in[i]<min)
			min=in[i];
	for(i=0;i<k;i++)
		if(out[i]>max)
			max=out[i];
	//cout<<min<<' '<<max<<endl;
	int count=0,tem=0;
	for(i=min;i<max;i++){
		for(l=0;l<j;l++)
			if(in[l]<=i&&out[l]>i)
				tem++;
		if(tem>count)
			    	count=tem;
			    tem=0;
	}
	cout<<j-1<<' '<<count;

}
