/*
 * ????.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */


int main(){
	int y1,y2,m1,m2,d1,d2,sum=0,sum1=0,sum2=0,sum3=0;
	int month1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int month2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int i,j,k,l;
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	if(y1==y2){
		if((y1%400==0)||((y1%4==0)&&(y1%100!=0))){
			for(i=m1;i<m2;i++)
				sum=sum+month2[i];
			sum=sum+d2-d1;
		}
		else{
			for(i=m1;i<m2;i++)
				sum=sum+month1[i];
			sum=sum+d2-d1;
		}
	}
	else{
		if((y1%400==0)||((y1%4==0)&&(y1%100!=0))){
			for(i=m1;i<=12;i++)
				sum1=sum1+month2[i];
			sum1=sum1-d1;
		}
		else{
			for(i=m1;i<=12;i++)
				sum1=sum1+month1[i];
			sum1=sum1-d1;
		}
		if((y2%400==0)||((y2%4==0)&&(y2%100!=0))){
			for(i=1;i<m2;i++)
				sum2=sum2+month2[i];
			sum2=sum2+d2;
		}
		else{
			for(i=1;i<m2;i++)
				sum2=sum2+month1[i];
			sum2=sum2+d2;
		}
		for(j=y1+1;j<y2;j++){
			if((j%400==0)||((j%4==0)&&(j%100!=0)))
				sum3=sum3+366;
			else
				sum3=sum3+365;
		}
		sum=sum1+sum2+sum3;
	}
	cout<<sum<<endl;
	return 0;
}
