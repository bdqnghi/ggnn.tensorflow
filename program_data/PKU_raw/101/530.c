/**
* file homwork.cpp
* author ??? 1100012722
* data 2011-10-14
* description ???
*/ 
int main()
{
 int a,b,c;
 int n1,n2,n3;
 for(a = 1; a <= 3 ;a ++)
   for(b = 1; b <=3 ;b ++)
     if(a != b)
       {
	    c = 6 - a - b;
		n1 = (b > a) + (c == a);
		n2 = (a > b) + (a > c);
		n3 = (c > b) + (b > a);
		if( (n1 != n2 ) && (n2 != n3) &&(n1 != n3) )
		 {
		  if( a + n1==b + n2 && b + n2 == c + n3)
           {
		    if(a > b && b > c) printf("%c%c%c",'C','B','A');
            else if(a > c && c > b) printf("%c%c%c",'B','C','A');
	    	else if(b > a && a > c) printf("%c%c%c",'C','A','B');
		    else if(b > c && c > a) printf("%c%c%c",'A','C','B');
		    else if(c > a && a > b) printf("%c%c%c",'B','A','C');
	    	else if(c > b && b > a) printf("%c%c%c",'A','B','C');
		   }
		 }
		}
 return 0;
}
          


		 
