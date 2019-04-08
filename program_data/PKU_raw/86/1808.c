//============================================================================
// Name        : tiaosheng.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main() {
	 int num;
	       cin>>num;
	       for(int i=1;i<=num;i++)
	       {  int t,times=0;
	          int a[21];
	          cin>>t;
	          if(t==0)cout<<60<<endl;
	          else
	         {
	        	  for(int j=0;j<t;j++)
	        	  {
	        		  cin>>a[j];
	        	  }
	        	  if((a[t-1]+t*3)<60){times=60-t*3;}
	        	   else
	        	       {
	        	            for(int j=0;j<t;j++)
	        	             	 {

	        	         		  	  if((a[j]+(j+1)*3)>=60&&(a[j]+(j+1)*3)<=63)
	        	         		  	   {
	        	         		            times=a[j];
	        	         		              break;
	        	         		  	   }
	        	         		  	  if((a[j]+(j+1)*3)>63)
	        	         		  	   {
	        	         		  		  times=a[j-1]+60-a[j-1]-j*3;

	        	         		  		  break;
	        	         		  	   }

	        	             	   }
	        	               }

	        	           cout<<times<<endl;

	        	         }

	         }
	return 0;
}
