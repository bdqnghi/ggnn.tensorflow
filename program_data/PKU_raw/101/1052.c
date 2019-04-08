
//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++
//============================================================================


int main()
{
    int a=0,b=0,c=0,i=0,p=0,q=0;
    for(i=1;i<=3;i=i+1)
    	{
    	  a=a+1;
    	 for(p=1;p<=3;p=p+1)
    	 {
    		 b=b+1;
    		 for(q=1;q<=3;q=q+1)
    		 {
    			 c=c+1;
    			 if(((b>a)+(c==a)+(a>b)+(a>c)+(c>b)+(b>a))==3)
    			 {
    				 if((a>b)&&(b>c))
    				 {
    					 cout<<"ABC"<<endl;
    					 return 0;
    				 }
    				 else if((a>c)&&(c>b))
    				 {
    					 cout<<"ACB"<<endl;
    					 return 0;
    				 }
    				 else if((b>c)&&(c>a))
    				 {
    					 cout<<"BCA"<<endl;
    					 return 0;
    				 }
    				 else if((b>a)&&(a>c))
    				 {
    					 cout<<"BAC"<<endl;
    					 return 0;
    				 }
    				 else if((c>b)&&(b>a))
    				 {
    					 cout<<"BCA";
    					 return 0;

    				 }
    				 else if((c>a)&&(a>b))
    				 {
    					 cout<<"CAB";
    					 return 0;
    				 }

    			 }
    		 }
    	 }

    	}
    return 0;

}
