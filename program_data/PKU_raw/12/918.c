void main()
{
	int a[16],i,sum=0,b,j,k,m;
	scanf("%d ",&b);
	while(b!=-1)
	{
	    a[0]=b;i=0;
            while(a[i]!=0)
	    {
		i++;
		scanf("%d ",&a[i]);
	    }
          
            for(j=1;j<i;j++)
            {    
               for(k=0;k<i-j;k++)
               {
                  if(a[k]>a[k+1])
                  {
                     m=a[k];
                     a[k]=a[k+1];
                     a[k+1]=m;
                  }
               }
            }
            for(j=0;j<i-1;j++)
            {
               for(k=j+1;k<i;k++)
               {
                  if(2*a[j]==a[k])
                  sum++;
               }
            }
            printf("%d\n",sum);sum=0;
            scanf("%d",&b);
	}
}
