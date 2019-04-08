/*
 * 2.cpp
 *
 *  Created on: 2012-10-29
 *      Author: lenovo
 */
int main()
{
    int A,B,C,t;
	char a[3]={'A','B','C'};
	int As,Bs,Cs;
	for(A=0;A<=2;A++)
		for(B=0;B<=2;B++)
			for(C=0;C<=2;C++){
	          As=((B>A)+(C==A));
	          Bs=((A>B)+(A>C));
	          Cs=((C>B)+(B>A));
	          if((A<B&&As>Bs||B<A&&Bs>As||A==B&&As==Bs)&&(C<A&&Cs>As||Cs<As&&C>A||A==C&&As==Cs)&&(B<C&&Bs>Cs||B>C&&Bs<Cs||B==C&&Bs==Cs)){
	        	  if(A<B){
	        		  t=A;
	        		  A=B;
	        		  B=t;
	        		  t=a[0];
	        		  a[0]=a[1];
	        		  a[1]=t;
	        	  }
	        	  if(A<C){
	        		  t=A;
	        		   A=C;
	        		  C=t;
	        		  t=a[0];
	        		  a[0]=a[2];
	        		 a[2]=t;
	        	  }
	        	  if(B<C){
	        		  t=B;
	        		   B=C;
	        		  	C=t;
	        		  	t=a[1];
	        		  a[1]=a[2];
	        		  a[2]=t;
	        	  }
	        	  cout<<a[2]<<a[1]<<a[0]<<endl;
	        	  }
			}

	        	return 0;
}
