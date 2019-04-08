/*
 * huiwen.cpp
 *
 *  Created on: 2011-12-18
 *      Author: admin
 */
int main(){
	int i,begin,begin1,end1,flag,len,length;
	char a[501];
	cin>>a;
	length=strlen(a);
	for (len=2;len<=length;len++){//???????
		for (begin=0;begin<=length-len;begin++){//??????
			begin1=begin;end1=begin+len-1;
			flag=1;
			while(begin1<end1){//?????????????
				if (a[begin1]!=a[end1]){flag=0;break;}
				begin1++;end1--;
			}
			if (flag){
				for(i=begin;i<=begin+len-1;i++){//??????
					cout<<a[i];
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
