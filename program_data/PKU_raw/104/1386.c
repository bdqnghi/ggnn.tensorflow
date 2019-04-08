/*
 * r.cpp
 *
 *  Created on: 2013-11-18
 *      Author: shu
 */

int min(int a,int b){
	if(a>=b)return b;
	else return a;
}
int f(int x,int y){
	int wx[10]={1,1,1,1,1,1,1,1,1,1},wy[10]={1,1,1,1,1,1,1,1,1,1};
	int i=0,j=0,t1,t2;
	wx[0]=x;wy[0]=y;                 //?
     while(wx[i]!=1){                //?
    	wx[i+1]=floor(wx[i]/2);          //x
    	i++;                         //y
     } t1=i;                              //?
     i=0;
     while(wy[i]!=1){                 //?
        	wy[i+1]=floor(wy[i]/2);       //?
        	i++;                      //?
         }t2=i;
     i=j=0;
      j=min(t1,t2);
      while(j>=0){
    	  if(wx[t1]!=wy[t2]){
    		  return wx[t1+1];
    		  break;
    	  }
    	  t1--;
    	  t2--;
    	  j--;
      }
}
int main(){
	int x1,y1;
	cin>>x1>>y1;
	cout<<f(x1,y1)<<endl;
	return 0;
}

