int main()
{
int num,n;
int max,sec;

  scanf("%d",&n);
  for(int i=0 ;i<n;i++)
  {
	 scanf("%d",&num);

	 if(i==0)
	 {
		 max=num;
	 }
		 
	 else if(i!=0)
	 {

		 if(num>max)
		 {
			 sec=max;
			 max=num;
		 }
		 else if(num>sec && num<max)
		 {
			 sec=num;
		 }
	 }
		
	 
   
   
  }
	printf("%d\n%d\n",max,sec);
	return 0;
}
