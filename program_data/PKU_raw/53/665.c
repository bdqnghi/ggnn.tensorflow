
void main()
{
  
 int a[N];
 int i,j,istart,iend,temp;
 int n;

 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
	scanf("%d",&a[i]);
 }
 


 for(i=0;i<n;i++)
 {

	 if(a[i]==0)
		 continue;
   
	   for(j=i+1;j<n;j++)
	   {
			if(a[j]==0)
				continue;

			if(a[j]==a[i])
			{
				a[j]=0;
			}


	   }





 }


	 for(i=0;i<n;i++)
	 {
          if(a[i]!=0)
		  {
            printf("%d",a[i]);
			break;
		  }

	 }
	i++;
	while(i<n)
	{
		 if(a[i]!=0)
			printf(",%d",a[i]);
		 i++;

	}











}