
int main()
{
	int a[11]={0};
	int b[11]={0};
	int c[11]={0};
	int p=0,q=0,r=0;//??
	int i,j;
	int M,N;

	scanf("%d%d",&M,&N);

	while(M>0)
	{
		a[p]=M;
		if(M%2==0) M=M/2;
		else M=(M-1)/2;
		p=p+1;
	}
	
	while(N>0)
	{
		b[q]=N;
		if(N%2==0) N=N/2;
		else N=(N-1)/2;
		q=q+1;
	}


	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			if(a[i]==b[j]) 
			{
				c[r]=a[i];
				r++;
			}
		}	
	}

	printf("%d",c[0]);
	//printf("%d",n);
	//for(i=0;i<q;i++)
	//	printf("%d ",b[i]);


	return 0;
}