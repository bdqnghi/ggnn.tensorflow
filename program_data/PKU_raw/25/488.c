/*
 * 3.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
int main(){
	int n,m;
	cin>>n;
	int i,carry=0,lenx=1;
	int y[405]={0};
	int x[405]={0};
	x[0]=1;
	for(m=1;m<=n;m++)
	{
		carry=0;
		for(i=0;i<lenx;i++)
			y[i]=0;
		for(i=0;i<lenx;i++){
			if(x[i]*2>=10){
				y[i]=x[i]*2-10+carry;
				carry=1;
			}
			else{
				y[i]=x[i]*2+carry;
				carry=0;
			}
		}
		if(carry==1){
			y[lenx]=1;
			lenx++;
		}
		for(i=0;i<lenx;i++)
			x[i]=y[i];
	}
	if(n==0)
		cout<<'1';
	else
		for(m=lenx-1;m>=0;m--)
			cout<<y[m];
	return 0;
}
