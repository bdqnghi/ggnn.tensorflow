int main()
{
	int i,t,flag,x,y,z;
	scanf("%d",&x);
	if(x<5) printf("empty\n");
	else
	{
	for( i=2; i<=x-2; i++)
	{   
		flag=0;
		for( t=2; t<=i/2; t++)
		{	
			if(i%t==0)
			{
				flag=1;
				break;
			}
			
		} 
		if(flag==0)
		{
              for(y=2;y<i+2;y++)
              {
                    if((i+2)%y==0)
                    {
                                        break;
                    }
              }
              if((i+2)==y)
              printf("%d %d\n",i,i+2);
        }          
      
	} 
}     
	return 0;	
}