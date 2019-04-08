/*
 * qimo_3.cpp
 *
 *  Created on: 2010-12-17
 *      Author: 10265
 */
int main()
{
	int result;
	cin>>result;
	while(result!=1){
		if(result==1)break;
		if(result%2==0){
			if(result==1)break;
			cout<<result<<"/2="<<result/2<<endl;
			result=result/2;
		}
		if(result%2==1){
			if(result==1)break;
			cout<<result<<"*3+1="<<result*3+1<<endl;
			result=result*3+1;
		}
	}
	cout<<"End"<<endl;
	return 0;

}