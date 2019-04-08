

int main()
{
	int i=0,j,max1,min1,k,x,m;
	char a[N],max[U],min[U];
	for(m=0;m<N;m++)
		a[m]='\0';
	for(m=0;m<U;m++)
		max[m]='\0';
	for(m=0;m<U;m++)
		min[m]='\0';
	gets(a);
	for(i=0;;)
	{
        if(a[i]=='\0')
			break;
		else
		{
		k=0; 
		    for(j=i;j<N;j++)
			{
              if(a[j]==' '||a[j]==','||a[j]=='\0')
				  break;
			  else
				  k++;
			 }
             //printf("%d\n",k);
		     if(!i)
			  {
			    max1=min1=k;
				for(x=0;x<j;x++)
				{
					max[x]=min[x]=a[x];
				}
			  }
			    
		       else
			   {
                    if(k>max1)
					{
						max1=k;
                        for(x=i;x<j;x++)
						{

							max[x-i]=a[x];
							
						}
						
					}
					else if(k<min1&&k!=0)
					{
							for(m=0;m<U;m++)
		                    min[m]='\0';	
						min1=k;
						for(x=1;x<j;x++)
						{

							min[x-i]=a[x];
						}

                        
					}
					
			   }
		
		}
	    i=j+1;
	}
	puts(max);
	puts(min);
    return 0;
}