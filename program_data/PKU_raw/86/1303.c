/*
 * ????.cpp
 *
 *  Created on: 2011-12-30
 *      Author: ???
 */

int main(){
	int num;cin>>num;
	while(num>0){
		num--;
		int badtimes,total=60,i;
		cin>>badtimes;
		if(badtimes==0)cout<<60<<endl;
		else{
			while(badtimes>0){
				badtimes--;
				cin>>i;
				if(total<i)continue;
				else if(total<i+3)total=i;
				else total-=3;
			}
			cout<<total<<endl;
		}
	}
	return 0;
}
