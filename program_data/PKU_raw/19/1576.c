/*
 * 1000012730_wg3.cpp
 *    ????
 *  Created on: 2010-11-6
 *      Author: ???
 */

int main(){
     char s[256],a[100],b[100];
     char c;
     int i,j,lengths,lengtha,lengthb,g=0,k=0,m;//i,j??????length??????g???????????????
     cin.getline(s,256);    cin.getline(a,100);    cin.getline(b,100);
     lengths=strlen(s);lengtha=strlen(a);lengthb=strlen(b);a[lengtha]=' ';
     for(i=lengtha+1;i>0;i--)
    	 {a[i]=a[i-1];}
     a[0]=' ';
     if(s[0]==a[1])
    	 {for(i=0;i<=lengtha;i++)
    		 {a[i]=a[i+1];}
    	 a[lengtha+1]=0;
    	 for(i=0;i<=lengths-1;i++)
    	     	 {for(j=0;j<=lengtha;j++)
    	     		 {if(s[i+j]==a[j])g=1;
    	     		 else g=0;
    	     		 if(g==0)break;
    	     		 else k=i;
    	     		 }//k???????????
    	     	 if(g==0)cout<<s[i];
    	     	 if(g==1) {cout<<b;i=i+lengtha-1;}}}
     else for(i=0;i<=lengths-1;i++)
    	 {for(j=0;j<=lengtha+1;j++)
    		 {if(s[i+j]==a[j])g=1;
    		 else g=0;
    		 if(g==0)break;
    		 else k=i;
    		 }//k???????????
    	 if(i+lengtha+1==lengths)
    	 {for(m=0;m<=lengtha-1;m++)
    	     		 {if(s[i+m]==a[m])g=1;
    	     		 else g=0;
    	     		 if(g==0)break;
    	     		 }
    	 if(g==1){cout<<' '<<b;break;}
    	 else cout<<s[i];}
    	 else {if(g==0)cout<<s[i];
    	      if(g==1) {cout<<' '<<b;i=i+lengtha;}}}
     return 0;
}
