
int main()
{
	int i,z,q,s,l,a[51]={0};
	for(i=10;i<=50;i=i+50) a[i]=i;
	for(z=10;z<=50;z=z+10)
	{	for(q=10;q<=50;q=q+10)
	    {   if(z!=q)
	       {  for(s=10;s<=50;s=s+10)
		     {   if(z!=s&&s!=q)
	            { for(l=10;l<=50;l=l+10)		  
			       { if(l!=z&&l!=q&&l!=s)
				     { if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
				       {
				       for(i=50;i>=10;i=i-10)
					   { if(a[i]!=0)
					   { if(a[i]=l) cout<<"l"<<" "<<l<<endl;
					     if(a[i]=q) cout<<"q"<<" "<<q<<endl; 
				     	 if(a[i]=z) cout<<"z"<<" "<<z<<endl;
					     if(a[i]=s) cout<<"s"<<" "<<s<<endl; 
						
					    
						
					  
					   
					   }}}}}}}}}}


	return 0;
}

