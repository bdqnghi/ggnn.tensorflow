/*
 * practice.cpp
 *
 *  Created on: 2014-5-23
 *      Author: de
 */

int main(){
	double a,b,c,x1,x2,i;
	int cases;
	cin>>cases;
	for(int j=0;j<cases;j++){
		cin>>a>>b>>c;
		if(b*b-4*a*c>0){
			if(b==0){
				x1 = (sqrt(0-4*a*c))/(2*a);
				x2 = (0 - sqrt(0-4*a*c))/(2*a);
			}
			else
			{x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
			x2 = (-b - sqrt(b*b-4*a*c))/(2*a);}
			cout<<fixed<<setprecision(5)<<"x1="<<x1<<";x2="<<x2<<endl;
		}
		if(b*b-4*a*c==0){
			if(b==0)x1=0.0;
			else x1 = (-b/(2*a));
			cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;
		}
		if(b*b-4*a*c<0){
			if(b==0){
				x1=0.0;
				i=sqrt(4*a*c)/(2*a);
			}
			else
			{x1 = (-b/(2*a));
			i=sqrt(4*a*c-b*b)/(2*a);}
			cout<<fixed<<setprecision(5)<<"x1="<<x1<<"+"<<i<<"i;x2="<<x1<<"-"<<i<<"i"<<endl;
		}

	}
	return 0;
}
