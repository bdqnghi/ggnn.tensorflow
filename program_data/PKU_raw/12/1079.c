int main()
{
	int x[100][16];
	int sum[100]={0};
	float y;
	int i,j,k;
	for(j=0;j<100;j++)
	{
	    for(i=0;i<16;i++)
		{
		    scanf("%d",&x[j][i]);
	            if(x[j][0]==-1)
			        goto loop;
			    if(x[j][i]==0)
					break;
		}
	}
loop:for(j=0;j<100;j++)
	{
			if(x[j][0]!=-1)
			{
		    for(i=0;i<16;i++)
			{
			    if(x[j][i]==0)
				    break;
		    	for(k=0;k<16;k++)
				{
				if(x[j][k]==0)
			     	break;
                y=1.0*x[j][i]/(1.0*x[j][k]);
				if(y==2)
					sum[j]=sum[j]+1;
				}
			}
		    printf("%d\n",sum[j]);
			}
	if(x[j][0]==-1)
		    	break;

	}
	return 0;
}