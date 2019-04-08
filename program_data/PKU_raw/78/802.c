int main()
{
   int z,q,s,l,i,word[3];;
   for(z=1;z<=5;z++)
	   for(q=1;q<=5;q++)
	   {
		   if(z==q) continue;
			for(s=1;s<=5;s++)
			{
				if((s==z)||(s==q)) continue;
				for(l=1;l<=5;l++)
				{
                if((l==s)||(l==q)||(l==z))  continue;
                     word[0]=(z+q)==(s+l);
                     word[1]=(z+l)>(s+q);
                     word[2]=(z+s)<q;
                     if(word[0]&&word[1]&&word[2])
                     for(i=5;i>=1;i--)
				    {
					   if(z==i) cout<<'z'<<' '<<z*10<<endl;
				       else  if(q==i) cout<<'q'<<' '<<q*10<<endl;		
				       else  if(s==i) cout<<'s'<<' '<<s*10<<endl;	
				       else  if(l==i) cout<<'l'<<' '<<l*10<<endl;
				       else	continue;
				    }
				}
			}
	   }
	   return 0;
}
