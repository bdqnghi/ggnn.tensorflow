int main()
{
    int m,n,i,j,k,l,max,s;
	char ch[300];
	
    scanf("%d",&n);
	s=0;
         max=0;
	for(i=0;i<n;i++)
	{
	    scanf("%d%d",&j,&k);
		if(((j>=90)&&(j<=140))&&((k>=60)&&(k<=90)))
			s++;
	    else
		{
		    if(s>max)
				max=s;
			s=0;
		}
	}
	if(s>max)
		max=s;

	printf("%d",max);
	

	return 0;
}