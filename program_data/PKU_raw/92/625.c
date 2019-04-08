
int main()
{   
	int n,s,m,i,j,t=0,sum=0;
	int fast1,slow1,fast2,slow2; 
	int a[1000],b[1000];
	for(m=0;;m++){
  scanf("%d",&n);
  if(n!=0)
  {    
        for(i=0;i<n;i++)
		  scanf("%d",&a[i]);
	  for(i=0;i<n;i++)
		  scanf("%d",&b[i]);
		for(i=0;i<n-1;i++){
			for(j=0;j<n-1-i;j++){
            if(a[j]<a[j+1])
			{s=a[j];a[j]=a[j+1];a[j+1]=s;}}}
        for(i=0;i<n-1;i++){
			for(j=0;j<n-1-i;j++){
			if(b[j]<b[j+1])
			{s=b[j];b[j]=b[j+1];b[j+1]=s;}}}   
 
     fast1=0;slow1=n-1;
     fast2=0;slow2=n-1;    
     
    for(i=0;i<n;i++)         
	{
	    if(a[fast1]==b[fast2])    
		{
		   if(a[slow1]>b[slow2]){t++;slow1--;slow2--;}
		   else if(a[slow1]<b[slow2]){t--;slow1--;fast2++;}
           else if(a[slow1]==b[slow2])
		   {
			   if(a[slow1]<b[fast2]){t--;slow1--;fast2++;}
               else if(a[slow1]==b[fast2]){break;}
		   }
		}
        else if(a[fast1]>b[fast2])     
		{t++;fast1++;fast2++;}
		else    {t--;slow1--;fast2++;} 
	}
   sum=t*200;
   printf("%d\n",sum);
   t=0;sum=0;
  }
  if(n==0) break;}
  
} 
