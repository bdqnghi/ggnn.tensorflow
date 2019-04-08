
void main()
{int a[20],n,r=0,i,j,count=0;
memset(a,0,sizeof(a));
  for(;;)
   {
	   scanf("%d",&n);
       if(n==-1)
		   break;
	  else if(n!=0)
	   {
		   a[r]=n;r++;continue;
	   }
	   else if(n==0)
	   {
		   
		   for(i=0;i<r-1;i++)
		   {
			   for(j=i+1;j<r;j++)
			   {if(a[i]==2*a[j]||a[j]==2*a[i])
			   count++;}
		      a[i]=0;
		   }
		   a[i]=0;
		   printf("%d\n",count);
		   count=0;
		   r=0;i=0;j=0;
		   continue;
	   }
   }	
}
