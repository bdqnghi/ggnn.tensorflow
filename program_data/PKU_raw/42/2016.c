int main()
{
         int n,number[100001],x,sum=0;
		 cin>>n;
		 for(int i=0;i<n;i++)
		 {
			 cin>>number[i];
		 }
		 cin>>x;
		 for(int i=0;i<n;i++)
		 {
			 if(number[i]==x&&number[i+1]!=x){
				 for(int j=i;j<n;j++)
				 {
					 number[j]=number[j+1];
				 }
				 sum++;
			     }
			 else if(number[i]==x&&number[i+1]==x){
			for(int j=i;j<n;j++)
				 {
					 number[j]=number[j+1];
				 }
			 i--;
			 sum++;
			 }    
		 }
		 for(int i=0;i<n-sum-1;i++){
			 cout<<number[i]<<" ";}
		 cout<<number[n-sum-1];
		 return 0;
}
