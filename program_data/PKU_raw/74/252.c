void main()
{
	int m,n,i,j,out1=0,out2=0,ns,t,p,k,count=0,b[1000];
	char a[100]={0};
	scanf("%d %d",&m,&n);
	if(m!=1)
	{
	
		for (i=m,k=0;i<=n;i++)
		{
			out1=0;
			out2=0;
		    for (j=2;j<i;j++)
			{
                if(i% j==0)
			        break;
			}
		    if(j==i)
		    	out1=1;
			ns=(int)log10(i);
			for(j=0,p=i;j<=ns;j++)
			{
				
			    t=(int) (p/ (int)pow(10,ns-j) );
				p=(int) (p% (int)pow(10,ns-j) );
				a[j]=48+t;
			}
			for(j=0;j<=ns;j++)
				if(a[j]!=a[ns-j])
					break;
				if(j==ns+1)
					out2=1;
		
		if(out1*out2!=0)
		{
			b[k]=i;
			count++;
			k++;
		}
		}
		if(count==0)
			printf("no");
		else
			for(k=0;k<count;k++)
			{
				printf("%d",b[k]);
				if(k!=count-1)
					printf(",");
			}


		
	}
}


			
		
