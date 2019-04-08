/*
 * POJ2736.cpp
 *
 *  Created on: 2011-12-25
 *      Author: wuch
 */

int main(){
	int n,i,j,l1,l2;
	char a[100],b[100];
	int ans[100],aa[100],bb[100];
	cin>>n;
	for (i=0;i<n;i++){
      cin>>a>>b;
      l1=strlen(a);
      l2=strlen(b);
      for (j=0;j<l1;j++) aa[j]=a[l1-j-1]-'0';
      for (j=0;j<l2;j++) bb[j]=b[l2-j-1]-'0';
      if (l1>l2) for (j=l2;j<l1;j++) bb[j]=0;
      for (j=0;j<l1;j++) ans[j]=aa[j]-bb[j];
      for (j=0;j<l1;j++) if (ans[j]<0){
    	  ans[j]=ans[j]+10;
    	  ans[j+1]--;
      }
      for (j=l1-1;j>-1;j--) cout<<ans[j];
      cout<<endl;
	}
	return 0;
}
