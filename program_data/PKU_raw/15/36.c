int main()
{
	int i=0,s,n;
	int l,r;
	scanf("%d",&n);	
	if (n<=10)
	{
	  int cancel[10][10];
	  for(l=0;l<n;l++)
	  {
			for(r=0;r<n;r++)
			{
			  scanf("%d",&cancel[l][r]);  /*%d ?????????*/
			}
	  }
	  int r1,r2,l1,l2; 
	  for(i=0,l=0;l<n;l++)
	  {  
		for(i=0,r=0;r<n;r++)
		{
		  if( cancel[l][r]==0)
		  {
		     l1=l;
		     r1=r;
			 i=1;
		     break;   
		  }
		}
		if(i==1)
		{
			break;
		}
	  }
	  for(l=0;l<n;l++)
	  {
		for(r=0;r<n;r++)
		{
		if( cancel[l][r]==0)
		{
		   l2=l;
		   r2=r;
		}
		}
	  }
	  s=(l2-l1-1)*(r2-r1-1);
	  printf("%d",s);
	}
	return 0;
}


   
