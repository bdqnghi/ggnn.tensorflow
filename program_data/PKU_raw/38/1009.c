







int main()
{
  int i,j;
 int k;
 double x[100];
 double *p=x;
  int n;
  double s,a;
  cin>>k;
  for(;k>=1;k--)
  {
	  cin>>n;
	  s=0;
	  a=0;
	  for(i=1;i<=n;i++)
	  {
		  cin>>*(p+i);
		  a+=*(p+i);
	  }
	  a=a/n;
	  for(i=1;i<=n;i++)
	  {
		  s=s+(*(p+i)-a)*(*(p+i)-a);
	  }
	  s=s/n;
	  s=sqrt(s);
	  cout<<fixed<<setprecision(5)<<s<<endl;
  }

  

  

 
 return 0;

}

