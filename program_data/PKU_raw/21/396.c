/*
 * 1.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */


int main(){
	int n,i,sum=0,num=1;
	int a[500];
	double aver,c;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	aver=1.0*sum/n;
	c=abs(aver-a[0]);
	for(i=1;i<n;i++){
		if(abs(aver-a[i])==c)
			num++;
		if(abs(aver-a[i])>c){
			c=abs(aver-a[i]);
			num=1;
		}
	}
	if(num==1)
		for(i=0;i<n;i++)
			if(c==abs(aver-a[i]))
				cout<<a[i];
	if(num>1){
		int g=0,h=0;
		for(i=0;i<n;i++)
			if(c==(aver-a[i])){
				g=1;
				cout<<a[i];
				break;
			}
		i++;
		for(;i<n;i++)
			if(c==(aver-a[i]))
				cout<<","<<a[i];
		if(g!=1){
			for(i=0;i<n;i++)
				if(c==(a[i]-aver)){
					h=1;
					cout<<a[i];
					break;
				}
		}
		if(h==1)i++;
		if(g==1)i=0;
		for(;i<n;i++)
			if(c==(a[i]-aver))
				cout<<","<<a[i];
			}
	return 0;
}
