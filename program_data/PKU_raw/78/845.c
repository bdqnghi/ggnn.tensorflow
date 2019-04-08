int main()
{
 int z,q,s,l,i,check;//????
 char a[6];
 for(z=1;z<=5;z++)   //????
	 for(q=1;q<=5;q++) 
		 for(s=1;s<=5;s++) 
		   for(l=1;l<=5;l++)
		   {check=(z+q==s+l)+(z+l>s+q)+(z+s<q);
               if(check==3)
			   {a[z]='z';a[q]='q';a[s]='s';a[l]='l'; //????
			   for(i=5;i>=1;i--)
				   if(i==z||i==q||i==s||i==l)
			   cout<<a[i]<<" "<<i*10<<endl;}
            }
 
	
	return 0;
	
}
