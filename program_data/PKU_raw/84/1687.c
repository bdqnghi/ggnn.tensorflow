int main()
{
	int i,n,j,k[101],l,max,sec=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	   {
		scanf("%d",&k[i]);
	
	   } 
	   max=k[0];
	for(i=0;i<n;i++)
	   {if(k[i]>=max)
	   
		{sec=max;
		max=k[i];}
       else if((k[i]<max)&&(k[i]>=sec))
		sec=k[i];
		
	   }
	 printf("%d\n",max);
	 printf("%d",sec);
	 return 0;  
	
	}
