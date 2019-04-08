int main()
{
	int k,len,b[100][1000]={0},i,j,t;
   char sen[100][1000];
   
   cin>>t;
   
   for(i=1;i<=t;i++)
   {
	   cin>>sen[i];
   }
    
   for(i=1;i<=t;i++)
   {
     len=strlen(sen[i]);
	 
	 for(j=0;j<=len-1;j++)
	 {
		 b[i][sen[i][j]-'a']++;
	 }
     
	 for(j=0;j<=len-1;j++)
	 {
		 if(b[i][sen[i][j]-'a']==1)
		 {
			 cout<<sen[i][j]<<endl;break;
		 
		 }
	 }
	 if(j==len)
	 {
		 cout<<"no"<<endl;
	 }
   }
   return 0;
}
