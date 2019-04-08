int Array(int a[5][5],int i,int j)
{
	int k,t;
	if(i<5&&j<5)
	{
		for(k=0;k<5;k++)
		{
			t=a[i][k];
			a[i][k]=a[j][k];
			a[j][k]=t;
	}	return (1);
	}
	else
		return (0);}
void main()


{
	int s[5][5];
	int n,m;
	int p,q;
	for(p=0;p<5;p++)
	{	for(q=0;q<5;q++)
	{	scanf("%d",&s[p][q]);}}
		scanf("%d %d",&n,&m);
     
	if(Array(s,n,m)==0)
	{	printf("error");}
	else
	{
		for(p=0;p<5;p++)
	
		{   
			for(q=0;q<5;q++)
			{
				if(q<4)
				printf("%d ",s[p][q]);
			else
				printf("%d\n",s[p][q]);}
		}
	}
}	


	


