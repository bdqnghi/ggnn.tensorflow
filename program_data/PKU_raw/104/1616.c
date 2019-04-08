
void main()
{
	int i,j,k,n,m,r1,r2,a1,b1,x,y,a[100]={0},b[100]={0},r,result=1;
	scanf("%d %d",&x,&y);
    
	for(i=x,k=0;i>=1;i=i/2,k++)
		a[k]=i;
	 
	for(i=y,k=0;i>=1;i=i/2,k++)
		b[k]=i;

	for(i=0,k=0;;i++)
	{
		if(a[i]==0) break;
		for(j=0;;j++)
		{
			if(b[j]==0) break;
			else if(b[j]==a[i])
				{result=a[i];k++;break;}
		}
		if(k!=0) break;
	}
	printf("%d\n",result);
	
}