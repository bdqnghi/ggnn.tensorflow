/*
 * 1.cpp
 *
 *  Created on: 2013-10-20
 *      Author: ??
 */
int main(){
	      int n,k,i,j,c=0,a[100000];
	      cin>>n;
	      for(i=0;i<n;i++){
	         cin>>a[i];
	      }
	      cin>>k;
	      for(i=0;i<n;i++){
	         if(a[i]==k){
	        	 for(j=i;j<n-1;j++) a[j]=a[j+1];
	             c+=1;
	             if(i==n-c) break;
	             i--;
	         }
	      }
	      cout<<a[0];
	      for(i=1;i<n-c;i++) cout<<" "<<a[i];
	      return 0;
}
