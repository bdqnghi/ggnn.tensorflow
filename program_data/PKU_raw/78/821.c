int main()
{
	int i,z,q ,s, l,word[3];
	char weit[6]={0,0,0,0,0,0};
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
		{ if(q==z) continue;
	        for(s=1;s<=5;s++)
		     { if(s==z||s==q) continue;
			     for(l=1;l<=5;l++)
		            { if(l==z||l==q||l==s) continue;
				 //cout<<z<<q<<s<<l<<endl;
                       word[0]=(z+q==s+l);
					   word[1]=(z+l>s+q);
					   word[2]=(z+s<q);
					  // cout<<word[0]<<word[1]<<word[2]<<endl;
                       if(word[0]+word[1]+word[2]==3)
					   {
						   weit[z]='z';
						   weit[q]='q';
						   weit[s]='s';
						   weit[l]='l';
						   for(i=5;i>0;i--)
						   {
							   if(weit[i]!=0)
							   cout<<weit[i]<<" "<<i*10<<endl;
						   }
					   }




				 }}}
	return 0;
}
	        
	        