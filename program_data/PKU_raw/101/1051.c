 /*
 * 10.11???.cpp
 *
 *  Created on: 2013-10-11
 *      Author: Administrator
 */

int main()
{int A,B,C,a1,a2,b1,b2,c1,c2,flag=0;
for(A=0;A<=2;A++)
{for(B=0;B<=2;B++)
	{if(B!=A)
	   {
	    for(C=0;C<=2;C++)
	     {a1=a2=b1=b2=c1=c2=0;
	    	if((C!=B)&&(C!=A))
	       { if(B>A)
	    	     a1=1;
	         if(A>B)
	        	 b1=1;
	         if(A>C)
	        	 b2=1;
	         if(C>B)
	        	 c1=1;
	         if(B>A)
	        	 c2=1;
	         if((A+a1+a2==2)&&(B+b1+b2==2)&&(C+c1+c2==2))
	        	 {
	        	 flag=1;
	        	 break;
	        	 }
	        }
	       }
	     }
	 if(flag)
		 break;
	}
if(flag)
	break;
}
if(A==0)
	cout<<'A';
if(B==0)
	cout<<'B';
if(C==0)
	cout<<'C';
if(A==1)
	cout<<'A';
if(B==1)
	cout<<'B';
if(C==1)
	cout<<'C';
if(A==2)
	cout<<'A';
if(B==2)
	cout<<'B';
if(C==2)
	cout<<'C';
return 0;
}

