//============================================================================
// Name        : prac-0106.cpp
// Author      : yintao
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

int main()
{
int A,B,C;
int a,b,c;
for(A=0;A<=2;A++)
   for(B=0;B<=2;B++)
    for(C=0;C<=2;C++)
    {
     a=(B>A)+(C==A);
     b=(A>B)+(A>C);
     c=(C>B)+(B>A);
  if((a+A==2)&&(b+B==2)&&(c+C==2) )
	  {
	  if(A==2)  {
		  if(B==1)
		    cout<<"CBA"<<endl;
		  cout<<"BCA"<<endl;
	  }
	  else if(B==2) {
		  if(A==1)
		  cout<<"CAB"<<endl;
		  cout<<"ACB"<<endl;
	  }
	  else {
		  if(A==1)
		  cout<<"BAC"<<endl;
		  cout<<"ABC"<<endl;
	  }
	  }
    }
return 0;
}
