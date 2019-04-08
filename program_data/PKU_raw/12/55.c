int main()
{
	int t,i,j,k,count;
	int group[15];
	scanf("%d",&t);
	do
	{
		i=0;
		do
		{
			group[i]=t;
			scanf("%d",&t);
			i++;
		}
		while(t!=0); 
		printf("\n");
        	    count=0;
		for(j=i-1;j>=0;j--)
		{
		   for(k=0;k<i;k++)
		   {
		      if((double)group[k]/2==group[j])//double
			  {
		      count++;
			  }
			  else if((double)group[j]/2==group[k])//!=int!!!!!!!
			  {
		      count++;
              			  }
		   }
		}
	    printf("%d\n",count/2);
		scanf("%d",&t);
		
	}
	while(t!=-1);	
	return 0;
}
 
