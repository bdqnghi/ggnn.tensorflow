int main()
{
	int n,i,name[300],j,m,k=1,t=0,count[300];
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&name[i]);
	}
	printf("%d,",name[0]);
    for(m=1;m<n;m++)
	{
         for(j=m-1;j>=0;j--)
		 {
			 if(name[m]==name[j])
			 {
				k=0;
				break;
			 }else
			 {
				 k++;
			 }
		 }
		 if(k!=0)
		 {
             count[t]=name[m];
			 t++;
		 }
		 k=1;
	}
	for(i=0;i<t-1;i++)
	{
		printf("%d,",count[i]);
	}
	printf("%d",count[t-1]);
	return 0;
}