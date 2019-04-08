int main()
{
   int sum;
   cin>>sum;
  
      if(sum>=100)
	  {
		  cout<<sum/100<<endl;
		  sum=sum-100*(sum/100);
	  }
	  else cout<<0<<endl;
	  if(sum>=50)
	  {
	      cout<<sum/50<<endl;
		  sum=sum-50*(sum/50);
	  }
	  else cout<<0<<endl;
	  if(sum>=20)
	  {
	     cout<<sum/20<<endl;
		 sum=sum-20*(sum/20);
	  }
	  else cout<<0<<endl;
	  if(sum>=10)
	  {
	     cout<<sum/10<<endl;
         sum=sum-10*(sum/10);
	  }
	  else cout<<0<<endl;
	  if(sum>=5)
	  {
	     cout<<sum/5<<endl;
		 sum=sum-5*(sum/5);
	  }
	  else cout<<0<<endl;
	  cout<<sum;
	  
   
   return 0;
} 
