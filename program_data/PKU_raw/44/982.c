void main()
{
	int a[6],i,ans=0;
	char d='-';
	for(i=0;i<6;i++)
	scanf("%d",&a[i]);
    for(i=0;i<6;i++)
	{   ans=0;
		if(a[i]==0) printf("%d\n",0);
		if(a[i]<0)  
		{
			a[i]=a[i]*(-1);
			printf("%c",d);
		   while(a[i])
		   {
			 ans*=10;
              ans=a[i]%10+ans;
              a[i]/=10;
		   }
            printf("%d\n",ans);
		 }
        if(a[i]>0)
		{
	        while(a[i])
			{
				ans*=10;
              ans=a[i]%10+ans;
              a[i]/=10;
			}
          printf("%d\n",ans);
		}
      
	}
}