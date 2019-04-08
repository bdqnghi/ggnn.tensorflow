int main()
{
	 int total=0,y,m1,m2,i,j,n;
     int t1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	 int t2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	 scanf("%d",&n);
     for(i=0;i<n;i++)
	 {
		scanf("%d%d%d",&y,&m1,&m2);
		if((y%4==0 && y%100 !=0)||y%400==0)
		{
			if(m1>m2)
			{
				total=0;
			    for(j=m2;j<m1;j++)
				{
				  total+=t2[j-1];
				}
			    if(total%7==0){
			      printf("YES\n");
				}
			    else 
				  printf("NO\n");
				
			}
			else if(m1<m2)
			{
				total=0;			   
				for(j=m1;j<m2;j++)
				{
				  total+=t2[j-1];
				}
			    if(total%7==0){
			      printf("YES\n");
				}
			    else 
				  printf("NO\n");
				
			}
		}
		else 
		{	
			if(m1>m2)
			{
				total=0;
			    for(j=m2;j<m1;j++)
				{
				  total+=t1[j-1];
				}
			    if(total%7==0){
                  printf("YES\n");
				}
			    else {
				  printf("NO\n");
				}
			}
			else if(m1<m2)
			{
				total=0;			   
				for(j=m1;j<m2;j++)
				{
				  total+=t1[j-1];
				}
			    if(total%7==0){
			      printf("YES\n");
				}
			    else {
				  printf("NO\n");
				}
			}
		}
    }		
	return 0;
}