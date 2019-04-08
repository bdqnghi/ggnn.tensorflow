int count;
void fun(int m,int n)
{   if(m <=sqrt(n)){
    for (int a=m;a <=sqrt(n);a++)
	{
	if(n%a==0){
		count ++; fun (a,n/a);}
	else count=count; 
	}}
	else count=count; 
 } 
main()
{
	int n;scanf("%d",&n);
	for (int i =0;i<n;i++)
	{
		count=0; 
		int num;scanf("%d",&num);
		for(int j=2;j<=sqrt(num);j++)
		{
			if(num%j==0)
			{count ++; fun(j,num/j);}
		}
		printf ("%d\n",count+1); 
	}}