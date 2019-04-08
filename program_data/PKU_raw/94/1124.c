/*
 * ????jishuxulie.cpp
 * ??????
 * ?????2012 11 10
 * ?????????
 */



int main(){
    int n,i,a,j,k,p;
    k=0;
    cin >>n;               //??????n
    int m[n];              //????
    for(i=0;i<n;i++)
    	cin>>m[i];         //??
    for(i=0,p=0;i<n;p++,i++){
    	if (m[p]%2==0){
    		for(j=p;j<n-k;j++)
    			m[j]=m[j+1];
    		p--;
    		k++;           //????
    	}
    }
    for(j=0;j<(n-k);j++)
    	for(i=0;i<(n-k-1-j);i++){
    		if(m[i]>m[i+1]){
    			a=m[i];
    			m[i]=m[i+1];
    			m[i+1]=a;  //??
    		}
    	}
    for (i=0;i<(n-k);i++){
    	if(i==(n-k-1)) cout<<m[i];
    	else cout<<m[i]<<",";   //??
    }
return 0;
}
