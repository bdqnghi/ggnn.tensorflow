
int a[30000];
int find(int k)  //???????a[k]?????
{
	 int i;
     for(i=0;i<k;i++)
     
     {
		 if(a[i]==a[k])
		 return 1;
      }                            //???????
      
	  return 0;              //??????
}

int main()
{
      int n;
      cin>>n;          //?????????
      for(int i=0;i<n;i++)
      cin>>a[i];       //?????

      cout<<a[0];
      for(int k=1;k<n;k++)
      {
      if(find(k)==0)
      cout<<" "<<a[k];
	  
       }               //?????????????
	  return 0;
}