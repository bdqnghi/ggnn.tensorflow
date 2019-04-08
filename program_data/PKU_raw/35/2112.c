int main()
{
	int m,n,a[8][8],i,t,k,tempx,tempy,temp=0;
	int b[1][2];
	scanf("%d,%d",&m,&n);
    

	for(i=0;i<m;i++)
	{   
	   for(t=0;t<n;t++)
	   {
		   scanf("%d",&a[i][t]);
	   }
	   }
for(k=0;k<m;k++)
{
	b[0][0]=a[k][0],tempx=0;
	for(i=0;i<n;i++)
	{
		
		if(a[k][i]>b[0][0])
		{
			b[0][0]=a[k][i];
            tempx=i;
		}
	}
	b[0][1]=a[k][tempx],tempy=0;
	for(i=0;i<m;i++)
	{    
		
		if(a[i][tempx]<b[0][1])
		{
			b[0][1]=a[i][tempx];
		tempy=i;
		}
	}
		if(b[0][0]==b[0][1])
		{
			printf("%d+%d",tempy,tempx);
		}
	    else
		{ 
			temp+=1;
		}
}

	if(temp==m)
		printf("No");



		  
	return 0;
}