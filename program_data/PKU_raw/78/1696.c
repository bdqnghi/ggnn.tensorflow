/*
 * 333333.cpp
 *
 *  Created on: 2010-11-20
 *      Author: jsgl
 */
int main()
{
	int W[4],Mz,Mq,Ms,Ml,s,i,j;//?????????????
	char X[4],t;
	for(Mz=10;Mz<=50;Mz=Mz+10)//?????????
		for(Mq=10;Mq<=50;Mq=Mq+10)
			for(Ms=10;Ms<=50;Ms=Ms+10)
				for(Ml=10;Ml<=50;Ml=Ml+10){
					if((Mz+Mq)==(Ms+Ml)&&(Mz+Ml>Ms+Mq)&&(Mz+Ms<Mq)){
						W[0]=Mz;
						W[1]=Mq;
						W[2]=Ms;
						W[3]=Ml;
				}
				}
	X[0]='z';//??????????X[4]
	X[1]='q';
	X[2]='s';
	X[3]='l';
	for(i=0;i<3;i++)//???????????
		for(j=0;j<3-i;j++){
			if(W[j]<W[j+1]){
				s=W[j+1];
				W[j+1]=W[j];
				W[j]=s;
				t=X[j+1];
				X[j+i]=X[j];
				X[j]=t;
			}
		}
	for(i=0;i<1;i++)
		cout<<X[i]<<" "<<W[i]<<endl;
	cout<<'q'<<" "<<W[1]<<endl;
	cout<<'z'<<" "<<W[2]<<endl;
	cout<<'s'<<" "<<W[3]<<endl;









	return 0;
}

