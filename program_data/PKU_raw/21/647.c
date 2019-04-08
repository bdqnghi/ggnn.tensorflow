/*
 * y1.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
float tran(float x){
	if(x<0)return -x;
	else return x;
}
int main(){
	int n,i,B=0;
	float p,m,a[301],s=0,b[301];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
        s+=a[i];
}
     p=s/n;
     b[0]=tran(a[0]-p);
     m=b[0];
     for(i=1;i<n;i++){
    	 b[i]=tran(a[i]-p);
    	 if(b[i]>m)
    	 m=b[i];
    	}

     for(i=0;i<n;i++)
    	 if(b[i]==m)
    		if(B)cout<<","<<a[i];
    		else { cout<<a[i];
    		    	 B++;}




     return 0;
}

