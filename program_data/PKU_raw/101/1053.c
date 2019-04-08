

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
    				 if(((b>a)+(c==a))==0)  //??A????????A????
    				 {
    					 cout<<"A";
    					 if((a>b)+(a>c)==1)//??B???????B????
    					 {
    						 cout<<"BC";
    					 }
    					 else
    					 {
    						 cout<<"CB";
    					 }
    					 return 0;
                     }
    				 				 if((a>b)+(a>c)==0)
    				 {
    					 cout<<"B";
    					 if((b>a)+(c==a)!=2)
    					 {
    						 cout<<"CA";
    					 }
    					 else
    					 {
    						 cout<<"AC";
    					 }
    					 return 0;

    				 }
    				 if(((c>b)+(b>a))==0)
    				 {
    					 cout<<"c";
    					 if((a>b)+(a>c)==1)
    					 {
    						 cout<<"BA";
    					 }
    					 else
    					 {
    						 cout<<"AB";
    					 }
    					 return 0;
    				 }

    			 }
    		 }
    	 }

    	}
    return 0;

}