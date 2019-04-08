int main()
{
    int a[10][10];
    int cow,col,i,j,k,t,max,min,m=0;
	int h,l;
	scanf("%d,%d",&h,&l);
    for(cow=0;cow<h;cow++)
	{
		for(col=0;col<l;col++)
		{
			scanf("%d",&a[cow][col]);
		}
	}
    for(cow=0;cow<h;cow++)
	{
		max=a[cow][0];
		for(i=0;i<l;i++)
		{
			if(a[cow][i]>=max)
			{
				max=a[cow][i];
				t=i;
			}//a[cow][t]??????????????i????}
		} 
      k=0; 
      min=a[cow][t];//???????
    for(j=0;j<h;j++)
	{ 
		if(a[j][t]<=min&&j!=cow)//??????? K=1
			k=1;
    } 
    if(k==0)
	{
    m=1 ; 
    printf("%d+%d",cow,t); 
    } 
	}
	if(m==0)
		printf("No");
	
    return 0; 
} 
