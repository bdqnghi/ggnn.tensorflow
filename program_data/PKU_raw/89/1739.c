int main()
{
     	int n,i,l,k,flag,a[100000],b[100000],c[100000];
		scanf("%d",&n);
		for(i=0;;i++)
		{
			scanf("%d%d",&a[i],&b[i]);
			if(a[i]==0&&b[i]==0)
			{
			    l=i;
			    break;
            }
		}
		for(i=0;i<n;i++)
		{
            c[i]=0;
        }
        for(i=0;i<l;i++)
        {
            k=b[i]-0;
            c[k]++;
         
		}
		for(k=0;k<n;k++)
		{
            flag=0;
	     	if(c[k]==n-1)
	     	{
              flag=1;
              for(i=0;i<l;i++)
              {
				if(a[i]==k)
				{
					flag=0;
					break;
				}
              }
              if(flag==1)
              {
		     	printf("%d",k);
		     	break;
              }
            }
        }
        if(flag==0)
            printf("NOT FOUND");
			
return 0;
}
