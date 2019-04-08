/*
 * 111.cpp
 *
 *  Created on: 2010-11-13
 *      Author: dell
 *      ??????
 */


int main(){
    int x,i,n[100],m[100],j,k;
    cin>>n[1];
    cin>>m[1];
    if(m[1]!=n[1]){
    for(i=1;i<=100;i++){
    	if(n[i]%2==0)n[i+1]=n[i]/2;
    	else if(n[i]%2!=0&&n[i]!=1)n[i+1]=(n[i]-1)/2;
    	else if(n[i]%2!=0&&n[i]==1)break;}
    for(j=1;j<=100;j++){
    	if(m[j]%2==0)m[j+1]=m[j]/2;
    	else if(m[j]%2!=0&&m[j]!=1)m[j+1]=(m[j]-1)/2;
    	else if(m[j]%2!=0&&m[j]==1){
    		k=j;
    		break;}
    	}
    for(i=1;i<=100;i++){
    	for(j=1;j<=k;j++){
    	if(m[j]==n[i])
    		break;}
    	if(m[j]==n[i])
    	    break;
    }


    x=m[j];
    cout<<x<<endl;
    }
    else cout<<m[1]<<endl;

	return 0;//????
}