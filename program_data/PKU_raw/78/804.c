int main()                       //?????
{
   int z,q,s,l;                  //??????zqsl??4???
   int a[6];
   char b[6];
   int i;
   for(i=0;i<6;i++)
   {a[i]=0;}
                                 
   for(z=1;z<=5;z++)             //?????????????(?12345??10?????)
   {
      for(q=1;q<=5;q++)
	  { if(z==q) continue;       //??????????????????????
	    
	      for(s=1;s<=5;s++)
		  { if(q==s||z==s) continue;
		    for(l=1;l<=5;l++)
			{ if(l==z||l==q||l==s) continue;
			   
			  if(z+q==l+s&&z+l>s+q&&z+s<q)        //??????????????
			    {
				 for(i=1;i<6;i++)
				 {
					 if(i==z){a[i]=z*10;b[i]='z';}               //???????????a???????b
                     else if(i==q){a[i]=q*10;b[i]='q';}
					 else if(i==s){a[i]=s*10;b[i]='s';}
					 else if(i==l){a[i]=l*10;b[i]='l';}
				 
				 
			     }

			    for(i=5;i>=0;i--)
				{
					if(a[i]!=0)
				    {cout<<b[i]<<" "<<a[i]<<endl;}           //???????????? 
			    } 
			  }
			
			}
		    
		  
		  } 
	  
	    
	  
	  
	  }
   
   
   }



return 0;
}                                                //?????