
void main( )
{

	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    int start[3];

	int end[3];

	int i;

	int sum = 0;
	
	for(i = 0; i < 3; i++)
	{
        scanf("%d",&start[i]);
	}

	
	for(i = 0; i < 3; i++)
	{
        scanf("%d",&end[i]);
	}

	
	

	int j = start[0];

	for(;j <= end[0]; j++)
	{ 
	  sum = sum + 365;

      if((j%4 == 0 && j%100 != 0)||(j%400) == 0)  
	  {
             sum = sum + 1;
	  }
      
	}
	
		for(i = 1; i < start[1]; i++)
		{

         sum = sum - month[i];
		}

		sum = sum - start[2]; 

    if((start[0]%4 == 0 && start[0]%100 != 0)||(start[0]%400) == 0)  
	{
        if(i >= 2)
		{
          sum = sum - 1;
		}

		
            
	 }
		for(i = end[1]; i < 13; i++)
		{

         sum = sum - month[i];
		}

		sum = sum + end[2]; 

    if((end[0]%4 == 0 && end[0]%100 != 0)||(end[0]%400) == 0)  
	{
        if(end[1] <= 2)
		{
          sum = sum - 1;
		}

		
            
	 }

	printf("%d\n",sum);


}