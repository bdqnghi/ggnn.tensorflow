/*
 * 1.cpp
 *
 *  Created on: 2010-12-24
 *      Author: 10265
 */
int main()
{
	int n;
	int xulie[501],jishu[501];
	int i,j,k=0;
	cin>>n;
   for(i=0;i<n;i++){
	cin>>xulie[i];
	if(xulie[i]%2==1){
	jishu[k]=xulie[i];
	k++;
	}
   }
	for(i=0;i<k-1;i++){
		for(j=0;j<k-1-i;j++){
			if(jishu[j]>jishu[j+1]){
				int temp=jishu[j];
				jishu[j]=jishu[j+1];
				jishu[j+1]=temp;
			}
		}
	}
	for(i=0;i<k-1;i++)
		cout<<jishu[i]<<",";
	cout<<jishu[k-1]<<endl;
	return 0;
   }
