/*
 * 1.cpp
 *
 *  Created on: 2012-10-12
 *      Author: 99003
 */
int main(){
	int n;
	double a,b,c,delta;
	double x1,x2;
	cin>>n;//??????
	while(n>0){
		cin>>a>>b>>c; //??3???
		delta=b*b-4*a*c;//??delta
		if(delta>0){ //?????
			x1=(0.000-b+sqrt(delta))/2.0/a;
			x2=(0.000-b-sqrt(delta))/2.0/a;
			cout<<"x1=";//????
			printf("%.5f",x1);
			cout<<";x2=";
			printf("%.5f",x2);
			cout<<endl;
		}
		else if(delta==0){ //??????
			x1=(0.00000000000000-b)/2/a;
			cout<<"x1=x2=";
			printf("%.5f",x1);
			cout<<endl;
		}
		else if(delta<0){ //??????
			x1=(0.00000000000000-b)/2/a;
			x2=sqrt(0.000000000000-delta)/2/a;
			cout<<"x1=";
			printf("%.5f",x1);
			cout<<"+";
			printf("%.5f",x2);
			cout<<"i;x2=";
			printf("%.5f",x1);
			cout<<"-";
			printf("%.5f",x2);
			cout<<"i"<<endl;
		}
		n=n-1;
		}
	return 0;
}