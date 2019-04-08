/*
 * review_7.cpp
 *
 *  Created on: 2010-12-27
 *      Author: ???
 *        ??? ????
 */



int main(){
	int n,m,i,j,a[50];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m;
		if(m==0){                              //????????????60
			cout<<60<<endl;
			continue;
		}
		for(j=0;j<m;j++)
			cin>>a[j];
		for(j=0;j<m;j++)                       //???????????????
			if(a[j]+3*j<=60)
				if(j+1==m||a[j+1]+3*(j+1)>60)
					if(a[j]+3*(j+1)>=60)
						cout<<a[j]<<endl;
					else
						cout<<60-3*(j+1)<<endl;
	}
	return 0;
}
