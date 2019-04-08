/*
 * 00073.cpp
 *??????
 *  Created on: 2011-11-16
 *      Author: ???
 */
int main(){                                  //???
       int a[20],b[20];
       int x,y,i,j,n=1,m=1;
       cin>>x>>y;
       while(x!=1){
    	   a[n]=x;
    	   x=x/2;
    	   n++;
       }
       a[n]=1;
       while(y!=1){
           	   b[m]=y;
           	   y=y/2;
           	   m++;
              }
       b[m]=1;
       for(i=1;i<=n;i++)
    	   for(j=1;j<=m;j++)
    		   if(a[i]==b[j]){
    			   cout<<a[i]<<endl;
    			   i=j=20;
    		   }
       return 0;
}
