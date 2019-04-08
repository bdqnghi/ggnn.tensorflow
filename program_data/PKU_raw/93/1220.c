//?????? 1300012809 **
//**************************
int main()                                    //???
{
   int  a ;
   cin >> a ;
   char g ;                                   //??????
	   g=' ';
   int x,y,z;
   if (a%3==0) { x=1;}
   if (a%5==0) { y=1;}
   if (a%7==0) { z=1;}
   {      if (x==1)                          //??????
           if (y==1)
			   if (z==1)  cout<< "3" << g << "5" << g << "7" << endl ;
               else cout<< "3" << g << "5" << endl ;
   }
   {	  if (x==1)
			   if (y!=1)
   			   if (z==1) cout<< "3" << g << "7" << endl ;
   }            
   {           if (x==1)
				   if (y!=1)
				    if (z!=1) cout<< "3" << endl; 
   }
   {  if (x!=1)
		 if (y==1)
            if (z==1) cout<< "5" << g << "7" << endl ;
	             else cout<< "5" << endl;        
}
{	if (x!=1)
		if (y!=1)
			if (z==1) cout<< "7" << endl;
} 
	if (x!=1)		
      if (y!=1)
		  if (z!=1) cout << "n" << endl ; 
 return 0;
}
