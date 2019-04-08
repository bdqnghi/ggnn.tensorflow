int s;
void search(int a,int k)
{
 	 if(a==0)
 	 return ;
 	 if(a==1)
 	 {
 	 return;
	 }
 for(int i=2;i<a;i++)
 {
   if(a%i==0&&a/i>=i&&i>=k&&a/i>=k)
   {
   s++;
   search(a/i,i);
   }
 }
 return ;
}		 		      	     		       
int main()
{
int n,a;
cin>>n;
for(int i=0;i<n;i++)
{
s=1;
cin>>a;
search(a,1);		
cout<<s<<endl;
}

 		 		 						
  return 0;
}					
