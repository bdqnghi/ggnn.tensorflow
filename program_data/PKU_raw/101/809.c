int main()
{
   int a,b,c;
   int x,y,z;
   a=3;
   b=2;
   c=1;
{x=((b>a)+(a=c));
 y=((a>b)+(a>c));
 z=((c>b)+(b>a));
   if((x<=y)&(y<=z)&&(x<=z))
   cout<<"ABC";  
   
 }
   a=3;
   b=1;
   c=2;
   {
 x=((b>a)+(a=c));
 y=((a>b)+(a>c));
 z=((c>b)+(b>a));
   
        
       if((x<=z)&&(z<=y)&&(x<=y))
   cout<<"ACB";    
   }
     a=2;
     b=1;
     c=3;
   {
 x=((b>a)+(a=c));
 y=((a>b)+(a>c));
 z=((c>b)+(b>a));
   
        
       if((x<=y)&&(z<=y)&&(z<=x))
   cout<<"CAB";    
   }
    
    a=2;
    b=3;
    c=1;
   {
 x=((b>a)+(a=c));
 y=((a>b)+(a>c));
 z=((c>b)+(b>a));
   
        
       if((x<=z)&&(y<=z)&&(y<=x))
   cout<<"BAC";    
   }
    a=1;
    b=2;
    c=3;
   {
 x=((b>a)+(a=c));
 y=((a>b)+(a>c));
 z=((c>b)+(b>a));
   
        
       if((y<x)&&(z<x)&&(z<y))
   cout<<"CBA";    
   }
    
   a=1;
   b=3;
   c=2;
   {
 x=((b>a)+(a=c));
 y=((a>b)+(a>c));
 z=((c>b)+(b>a));
   
        
       if((z<x)&&(y<x)&&(z<x))
   cout<<"BCA";    
   }
  
   return 0;
   
    }