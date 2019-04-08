void main()
{
     int i,j=0,k,temp,b[300];
	 char ss[1500];
	 scanf("%s",ss);
	 for(i=0;i<300;i++)
		 b[i]=0;

	 for(i=0;i<1500;i++)
	 {
		 if(ss[i]>47&&ss[i]<58)
			 b[j]=b[j]*10+ss[i]-48;
		 else if(ss[i]==0) break;
		 else j++;
	 }
	  

	 for(i=0;i<j;i++)
		for(k=0;k<j-i;k++)
			if(b[k]<b[k+1])
			{
				temp=b[k];b[k]=b[k+1];b[k+1]=temp;
			}

			
		if(j==0) printf("No\n");
		else 
		{
			for(i=0;i<j+1;i++)
			{	
				if(b[i]!=b[i+1]) 
				{
					if((i+1)!=(j+1))
					{	printf("%d",b[i+1]);break;temp=-1;}
					else printf("No");
				}
				

			}
		}
	    
	 		 
}