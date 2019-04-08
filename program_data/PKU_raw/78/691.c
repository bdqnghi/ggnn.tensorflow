//============================================================================
// Name        : shj.cpp
// Author      : ???
// time        : 2013.10.21
// Description :  ???
//============================================================================


int main()//???
{   //?????
   int z=50,q=50,s=50,l=50;
  for(z=50;z>=10;z=z-10)//???????z,q,s,l
  {
	  for(q=50;q>=10;q=q-10){
		  if(z==q)
			  continue;
		  for(s=50;s>=10;s=s-10){
			  if(s==z||s==q)
				  continue;
			  for(l=50;l>=10;l=l-10){
				  if(l==z||l==q||l==s)
					  continue;
				  if(((z+q)==(s+l))&&((z+l)>(q+s))&&((z+s)<q))
				  {
					 for(int i=50;i>=10;i=i-10)//???????
						 if(z==i)
							 cout<<"z "<<z<<endl;
						 else if(q==i)
							 cout<<"q "<<q<<endl;
						 else if(s==i)
							 cout<<"s "<<s<<endl;
						 else if(l==i)
							 cout<<"l "<<l<<endl;

				  }

			  }
		  }
	  }
  }
   return 0;
}   //?????
