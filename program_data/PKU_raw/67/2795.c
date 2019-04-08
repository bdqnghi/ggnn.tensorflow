/*
 * jiweijiu_liaofa.cpp
 *
 *  Created on: 2014-1-5
 *      Author: ??
 */
double rank(double all,double live){
	return live/all;
}
int main(){
    int n;cin>>n;
    double a[2];
    cin>>a[0]>>a[1];
    double std=rank(a[0],a[1]);
    for(int i=0;i<n-1;i++){
    	double aa[2];
    	cin>>aa[0]>>aa[1];
    	double stdd=rank(aa[0],aa[1]);
    	if(stdd-std>0.05)cout<<"better\n";
    	else if(std-stdd>0.05)cout<<"worse\n";
    	else cout<<"same\n";
    }
	return 0;
}
