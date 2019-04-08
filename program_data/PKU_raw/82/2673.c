int main()
{
  int n,a,b,c=0,t=0,i=1,max=0;
  cin>>n;
  for(i=1;i<=n;i++)
  {  
	  cin>>a>>b;
      if(a>=90&&a<=140&&b>=60&&b<=90)
          c=c+1;
	  else
		{  
	        c=0;
	  }
	  t=c;
		if(t>max)
		 max=t;  
  }

  cout<<max;
  return 0;
}