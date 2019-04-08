int main()
{ 
	int a,i,j,k,h;
	int b[16]={0};
   while(1)
   {
	   i=0;
	  while(cin>>a)
		{
		  if(a==(-1))
				return 0;
		  else
		  {	
			  if(a!=0)
				{
					b[i]=a;
					i++;
				}
		        else
					break;
		  }
		}
		h=0;
	
		for(j=0;j<=i-1;j++)
			{
				if(b[j]!=0)
				{	
					for(k=0;k<=i-1;k++)
					{
						if(b[j]==b[k]*2)
						h++;
					}
				}
				else
					 break;
				
			}
			cout<<h<<endl;
	}
   	 return 0;
}
		
		

