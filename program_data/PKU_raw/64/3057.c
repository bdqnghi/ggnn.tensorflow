/*
 * distance.cpp
 *
 *  Created on: 2013-11-1
 *      Author: ???1300012996
 */
int main(){
    int n;cin>>n;int a[n][3];//???????????
    for(int i=0;i<n;i++)
    for(int j=0;j<3;j++){
    	cin>>a[i][j];
    }
    int m=n*(n-1)/2;
    double d[m],t;//??????????
    int p=0,num[m][2],tt,ttt;
    for(int ii=0;ii<n;ii++)
    	for(int jj=ii+1;jj<n;jj++){
    	d[p]=sqrt((a[ii][0]-a[jj][0])*(a[ii][0]-a[jj][0])+
    			(a[ii][1]-a[jj][1])*(a[ii][1]-a[jj][1])+
    			(a[ii][2]-a[jj][2])*(a[ii][2]-a[jj][2]));
    	num[p][0]=ii;num[p][1]=jj;//??????????????????
    	p++;
    	}
    for(int iii=1;iii<m;iii++)
    	for(int jjj=0;jjj<m-iii;jjj++){
    		if(d[jjj]<d[jjj+1]){//??????????????????????????????
    			t=d[jjj];d[jjj]=d[jjj+1];d[jjj+1]=t;
    			tt=num[jjj][0];num[jjj][0]=num[jjj+1][0];num[jjj+1][0]=tt;
    			ttt=num[jjj][1];num[jjj][1]=num[jjj+1][1];num[jjj+1][1]=ttt;
    		}
    	}
    int iij,jji;
    for(int ij=0;ij<m;ij++){//?????
    	iij=num[ij][0];jji=num[ij][1];
    	cout<<"("<<a[iij][0]<<","
        		<<a[iij][1]<<","
        		<<a[iij][2]<<")-("
        		<<a[jji][0]<<","
        		<<a[jji][1]<<","
        		<<a[jji][2]<<")="
        		<<fixed<<setprecision(2)<<d[ij]<<endl;
    }
	return 0;
}
