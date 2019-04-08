/*
 * y2.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main(){
	char a[401],*p=a;
	int n,len,tolen=0;
	cin>>n;
	cin>>p;
	cout<<p;
	len=strlen(p);
	tolen=len;
	while(n-1){
		cin>>p;
		len=strlen(p);
		tolen+=(len+1);
		if(tolen<=80)
			cout<<" "<<p;
		else {
			cout<<endl;
			cout<<p;
			tolen=len;
		}
		n--;
	}
return 0;
}
