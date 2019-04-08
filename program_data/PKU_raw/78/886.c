//*****************
//???***********
int main()
{
       int z=1,q=1,s=1,l=1,Z=1,Q=1,S=1,L=1;
	   for(z=1;z<=5;z++)
		   for(q=1;q<=5;q++)
			   for(s=1;s<=5;s++)
				   for(l=1;l<=5;l++)
				   {
					   if(
						   ((z+q)==(s+l))
						   &&((z+l)>(s+q))
						   &&((z+s)<q)
						   &&(z!=q)&&(z!=s) &&(z!=l)&&(q!=s) &&(q!=l)&&(s!=l) )
					      {
						   Z=z*10;Q=q*10;S=s*10;L=l*10;
					      } 
				   }
							for(int i=50;i>=10;i=i-10)
						   {
							   if(Z==i)
								   cout<<'z'<<' '<<Z<<endl;
							   if(Q==i)
								   cout<<'q'<<' '<<Q<<endl;
							   if(S==i)
								   cout<<'s'<<' '<<S<<endl;
							   if(L==i)
								   cout<<'l'<<' '<<L<<endl;
							}
						   return 0;
}