//*************
//????*****
int main()
{
	int n=0,i=0,a[10]={0},b[10]={0};
	float gra[10]={0},sum[10]={0},Sum1=0,Sum2=0,GPA=0;
	cin>>n;
	for(i=0;i<n;i++)
	{cin>>a[i];}                              //??????
	for(i=0;i<n;i++)
	{cin>>b[i];}                              //??????
	for(i=0;i<n;i++)
	{
		if(b[i]<=100&&b[i]>=90)
		{gra[i]=4.0;}
		if(b[i]<=89&&b[i]>=85)
		{gra[i]=3.7;}
		if(b[i]<=84&&b[i]>=82)
		{gra[i]=3.3;}
		if(b[i]<=81&&b[i]>=78)
		{gra[i]=3.0;}
                if(b[i]<=77&&b[i]>=75)
		{gra[i]=2.7;}
		if(b[i]<=74&&b[i]>=72)
		{gra[i]=2.3;}
		if(b[i]<=71&&b[i]>=68)
		{gra[i]=2.0;}
	        if(b[i]<=67&&b[i]>=64)
		{gra[i]=1.5;}
		if(b[i]<=63&&b[i]>=60)
		{gra[i]=1.0;}
		if(b[i]<60)
		{gra[i]=0.0; } 
	}                                          //??????????
		for(i=0;i<n;i++)
		{
			sum[i]=a[i]*gra[i];
	    }                                      //???????????
	for(i=0;i<n;i++)
	    {
			Sum2=Sum2+sum[i];
	    }                                      //??????????
	for(i=0;i<n;i++)
	{
		Sum1=Sum1+a[i];
	}                                          //??????????
	GPA=Sum2/Sum1;                             //?????
	printf("%.2f",GPA);
	return 0;
}
