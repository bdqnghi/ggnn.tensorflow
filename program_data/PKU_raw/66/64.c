int days(int n)
{
	int i,sum=0; 
	if(n==1)return 0;
	else if(n==0)n=400;
	for(i=1;i<n;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
			sum=sum+2;
		else sum++;
	}
	return sum;
}
int main()
{
    int y,m,d,i,totaldays=0;
	scanf("%d%d%d",&y,&m,&d);
	int k[12]={31,28,31,30,31,30,31,31,30,31,30,31};
         y=y%400;
	if(y%4==0&&y%100!=0||y%400==0)k[1]=29;
	for(i=0;i<m-1;i++)
		{
			totaldays=totaldays+k[i];
		}
		totaldays=totaldays+d+days(y);
		int w;
		w=totaldays%7;
		switch(w)
		{
			  case 0:  
				   printf("Sun.");  
				   break;  
			  case 1:  
				   printf("Mon.");  
				   break;  
			  case 2:  
				   printf("Tue.");  
				   break;  
			  case 3:  
				   printf("Wed.");  
				   break;  
			case 4:  
				  printf("Thu.");   
					break;  
			case 5:  
				  printf("Fri.");   
					break;  
			case 6:  
				  printf("Sat.");   
					break;  
		}
	return 0;
}

