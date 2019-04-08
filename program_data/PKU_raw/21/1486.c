void main()
{
   int n,i;
   float ave,sum,min,max,a,b;
   float num[300];   
   sum=0;
   a=0;
   b=0;
   n=0;
   ave=0;
   i=0;
   while(i<299)
   {
	   num[i]=0;
	   i++;
   }
   scanf("%d",&n);
   for(i=0;i<n;i++)
	   scanf("%f",&num[i]);


   i=0;
   while(i<n)
   {
	   sum=sum+num[i];
	   i++;
   }

   ave=sum/n;
 

   i=0;
   while(i<n-1)
   {
	   if(num[i]>num[i+1])
	   {
		   max=num[i];
		   num[i]=num[i+1];
		   num[i+1]=max;
	   }
	   i++;
   }
   max=num[n-1];

   i=n-1;
   while(i>0)
   {
	   if(num[i-1]>num[i])
	   {
		   min=num[i-1];
		   num[i-1]=num[i];
		   num[i]=min;
	   }
	   i--;
   }
   min=num[0];
   a=ave-min;
   b=max-ave;
   if(a>b)
	   printf("%.0f",min);
   else if(a<b)
	   printf("%.0f",max);
   else printf("%.0f,%.0f",min,max);
}

