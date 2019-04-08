/*
 * 1000012826_????.cpp
 *
 *  Created on: 2011-1-5
 *      Author: Administrator
 */

int k;
int len;
void pei(char a[],int k){
      int i,j;
      if(k==len/2)return;//?????????
      for(i=1;i<len;i++){
    	  if(a[i]!=a[0]&&a[i]!='.'){//???????????
    		  for(j=i;j>=0;j--){//??????????
    			  if(a[j]==a[0])
    			  { cout<<j<<" "<<i<<endl;
    			  a[i]='.';a[j]='.';//?????
    			  break;
    			  }
    		  }
    		  break;
    		  }
      }
      k++;//???????
      pei(a,k);
}

int main(){
	char a[101];
	cin.getline(a,100);
	len=strlen(a);
	k=0;
	pei(a,0);
}