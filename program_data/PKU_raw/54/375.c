void main()
{
	int n,k,i=1,j,s;
	scanf("%d%d",&n,&k);printf("\n");
    do
	{s=i;
	 for(j=1;j<=n;j++)
	   {s=s*n;s=s+k;
	    if(s%(n-1)!=0) break;
		else s=s/(n-1);
            }
		i++;
	 } while(j<n);
	 printf("%d",s);
}