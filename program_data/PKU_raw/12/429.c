/*
 * ????.cpp
 *
 *  Created on: 2010-11-17
 *      Author: IBM
 */


int main(){
	int n,k,i,j;                                             //n?2?????
	int a[16];
	while(cin>>a[0]&&a[0]!=-1){               //?????????-1
		k=1;                                            //????????
		n=0;
		while(cin>>a[k]&&a[k]!=0)         //???????0
			k++;                                   //??????1
		for(i=0;i<k-1;i++)
			for(j=i+1;j<k;j++)
				if((a[i]==a[j]*2)||(a[j]==a[i]*2))   //??????????2??1/2
					n++;                   //2?????1
		cout<<n<<endl;                         //????
	}
	return 0;
}

