int main()
{
	int y,m,x,i,sum=0;
	scanf("%d%d%d",&y,&m,&x);
   if(y%4==0&&y%100!=0||y%400==0)
	{
		int d[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
		for(i=0;i<m;i++)
		{
			sum=sum+d[i];
		}
	   
	
		printf("%d",sum+x);
	}
	else
	{
       int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	   for(i=0;i<m;i++)
	   {
		   sum=sum+d[i];
	  
	   }
    
	   printf("%d",sum+x);
	}
	return 0;
}