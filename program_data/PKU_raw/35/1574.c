void main()
{  
 int m,n,j,i,p,a[9][9],hang,lie,k,t,max,min,truth=0;
 char c;
 scanf("%d%c%d",&m,&c,&n);
   for(j=0;j<m;j++)
   for(i=0;i<n;i++)
   scanf("%d",&a[j][i]);

   for(j=0;j<m;j++)
{   max=a[j][0]; 
         lie=0;  
        for(i=0;i<n;i++)
		
             if(a[j][i]>max)
			 {max=a[j][i];
                   k=i;
                lie=k;
			 }
		
      min=a[j][lie];
      hang=j;
            for(p=0;p<m;p++)
      
               if(a[p][lie]<min)
			   {  min=a[p][lie];
                   t=p;
                 hang=t;
			   }
     
      
      if (max==min)
      {truth=1;
       printf("%d+%d\n",hang,lie);
       break;
      }
   }
   if(truth==0)
   printf("No\n");
}