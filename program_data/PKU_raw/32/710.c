int main()
{
   int len1,len2,n,i,j,k,result[1000];
   char num1[101],num2[101];
   cin>>n;
   for(i=1;i<=n;i++)
   {
       int a[1000]={0};
       int b[1000]={0};
	   int result[1000]={0};
	   cin>>num1>>num2;
       
      len2=strlen(num2);
      len1=strlen(num1);
		 
	  
	  
	 for(j=len1-1,k=0;j>=0;j--,k++)
		  {
             a[k]=num1[j]-'0';
			 
		  }
		  for(j=len2-1,k=0;j>=0;j--,k++)
		  {
             b[k]=num2[j]-'0';
		  }
		  
		  
		  
		  for(k=0;k<=len1-1;k++)
		  {
			  result[k]=result[k]+a[k]-b[k];
		      if(result[k]<0)
			  {
				  result[k+1]--;
			      result[k]+=10;
			  }
		  
		  
		  
		  }
          for(k=len1-1;k>=0;k--)
		  {
			  cout<<result[k];
		  }
          cout<<endl;
   
   
   
   
   }
	
   


		  
   return 0;
}






