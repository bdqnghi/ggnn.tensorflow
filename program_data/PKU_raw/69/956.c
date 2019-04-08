
main()
{
	int i,j,k,s,t=0,q=0; 
	char x[250],y[250],z[251]; 
	scanf("%s",&x);
	scanf("%s",&y);
	
	for(i=0;;i++)
	if(x[i]==0)break; 
	for(j=0;;j++)
	if(y[j]==0)break;
	
	for(k=1;;k++)
	{
		if(k<=i&&k<=j)
		{
			s=x[i-k]+y[j-k]-96+t;
		    z[k]=s%10+48;t=s/10; 
		    } 
		if(k>i&&k<=j)
		{
			s=y[j-k]-48+t;
		    z[k]=s%10+48;t=s/10; 
			} 
		if(k<=i&&k>j)
		{
			s=x[i-k]-48+t;
		    z[k]=s%10+48;t=s/10; 
			} 
		if(k>i&&k>j)
		{
			z[k]=t+48;
			break;
			} 
		} 

	for(;k>0;k--)
	if(z[k]!=48||q!=0)
	{
		q++;
		printf("%c",z[k]);
		} 
	if(q==0)printf("0"); 

	return 0; 
	} 