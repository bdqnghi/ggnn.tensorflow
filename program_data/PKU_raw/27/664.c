/*
 * 1.cpp
 *
 *  Created on: 2012-11-1
 *      Author: AK
 */
int main(){
	int n;
	double a,b,c,p;
	cin>>n;
	for(;n>=1;n--){
		cin>>a>>b>>c;
		p=b*b-4*a*c;
		if(p>0) cout<<"x1="<<fixed<<setprecision(5)<<0+(-b+sqrt(p))/(2*a)<<";x2="<<0+(-b-sqrt(p))/(2*a)<<endl;
		else if(p==0) cout<<"x1=x2="<<fixed<<setprecision(5)<<0+(-b)/(2*a)<<endl;
		else cout<<fixed<<setprecision(5)<<"x1="<<0+(-b)/(2*a)<<'+'<<sqrt(-p)/(2*a)<<"i;x2="<<0+(-b)/(2*a)<<'-'<<sqrt(-p)/(2*a)<<"i"<<endl;
		}
	return 0;
}
