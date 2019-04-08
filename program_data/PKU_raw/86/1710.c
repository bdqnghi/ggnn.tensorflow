int main()
{
int i,j;
int n;
int a,b,c,d,e;
int f[20];
cin>>n;
for (i=1;i<=n;i++)
	{        
	 cin>>a;
	 if (a==0) cout<<60<<endl;
	 else
	 	 {
	  	 
	       for (j=1;j<=a;j++)	cin>>f[j];		 
 	       for (j=1;j<=a;j++)
	 	 	    {	
				if ((f[j]+3*j)>=60 && (f[j]+3*j)<=62) 
				    {cout<<f[j]<<endl;
				     break;
					}
				if ((f[j]+3*j)>62 ) 
				    {cout<<63-j*3<<endl;
				     break;
					}
 				 if (j==a) 
				   {cout<<60-a*3<<endl;
 				    break;
				   }
 			
				 }
		 }
	}	

}