
int main(int argc, char* argv[])
{
	int n,m,k,i,j,p,num;
	int a[301];
	for(;;)
	{
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)
			break;
		else if(m==1)
			printf("%d\n",n);
		else
		{
    	    k=n+1;num=0;
   	        for(i=1;i<n+1;i++)
			{
		        a[i]=i;
			}
	        while(num<n-1)
			{
	            for(j=1;j<n+1;j++)
				{
		            if(a[j]!=0&&a[j]%m==0)
					{
	                     a[j]=0;
				         num++;
					}
				    else;
				}
	            for(p=1;p<n+1;p++)
				{
	                if(a[p]==0)
					{
		   	              continue;
					}
	   	            else
					{
			             a[p]=k;
	        	         k++;
					}
				}	
			}
            for(i=2;i<n+2;i++)
			{
	        	if(a[i-1]!=0)
				{
		        	break;
				}
			}
	        printf("%d\n",i-1);
		}
	}
	return 0;
}