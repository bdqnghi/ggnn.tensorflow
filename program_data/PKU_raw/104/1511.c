//**********************************
//??: ???
//???2013.11.23
//**********************************
int main()
{   
	int x=0,y=0,a[10000],b[10000],i=1,j=1,p=0,q=0,k=0;
	cin>>x>>y;
    if(x>1)
	{
		   for(i=1;;i++)
		   { 
			  if(x%2==0)
			  {
			     a[i]=x;
			     x=x/2;
			  }
			  else
			  {
			     a[i]=x;
			     x=(x-1)/2;
			  }
			   if(x==1)
			   {   a[i+1]=1; break; }
		   }
    }
	else
		a[1]=1;
	 if(y>1)
	{
		   for(j=1;;j++)
		   { 
			  if(y%2==0)
			  {
			     b[j]=y;
			     y=y/2;
			  }
		      else
			  {
			     b[j]=y;
			     y=(y-1)/2;
			  }
			   if(y==1)
			   {   b[j+1]=1; break; }
		    }
	}
	 else
		 b[1]=1;
	 for(p=1;p<=i+1;p++)
	 {
		 for(q=1;q<=j+1;q++)
		 {
			 if(a[p]==b[q])
			 {   k=1; cout<<a[p]<<endl;  break;  }
		 }
         if(k==1)
			 break;
	  }


	return 0;	
}