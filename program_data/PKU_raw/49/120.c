void f(int x,char str[501]);
   int main()
  {
      int le,x=2;
       char str[501];
        cin>>str;
      for(x=2;x<=le;x++)
        f(x,str);
        return 0;
   }

void f(int x,char str[501])
{
	int i,le,j,flag=1,p;
	   le=strlen(str);
	   for(i=0;i<=le-x;i++)
	  {
		   if(x%2==0)
		   {
			   for(j=i;j<=i+x/2-1;j++)
				if(str[j]!=str[i+i+x-1-j])
					flag=0;
		         if(flag==1)
			     {
			        for(p=i;p<=i+x-1;p++)
			        cout<<str[p];
			        cout<<endl;
			      }
		         flag=1;
		    }
	           if(x%2==1)
	           {
		          for(j=i;j<=i+(x-1)/2-1;j++)
			          if(str[j]!=str[i+i+x-1-j])
				           flag=0;
		              if(flag==1)
		               {
			                 for(p=i;p<=i+x-1;p++)
				             cout<<str[p];
			                 cout<<endl;
		                }
		                flag=1;
	           }
	}
}



