main()
{
     int a[16],j;
     int k,m,y;
     int i;
while(1==1)	 
{
     m=0;
	 for(i=0;i<=15;i++)
     {
          scanf("%d",&a[i]);
		  if(a[i]==-1)
		  {
			  y=1;
			  break;
		  }
		  if(a[i]==0) break;
		  else m=m+1;
	 }
     if(y==1) break;
	 else
	 {

      k=0; 
     for(i=0;i<m-1;i++)
     {
        
		 for(j=i+1;j<m;j++)
          {
               if(a[i]==2*a[j]||a[j]==2*a[i]) k++;
               
          }
     }
	 }
	 
     printf("%d\n",k);
	}
     
} 
