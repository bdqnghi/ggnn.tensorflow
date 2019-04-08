void main()
{
    int t,k,a[300]={0},i,j=0;
    char b[300];
    for(i=0;i<300;i++)
    {
    	scanf("%d",&a[i]);
    	scanf("%c",&b[i]);
    	j++;
    	if(b[i]=='\n') break;
    }
    for(i=0;i<j;i++)
    {
    	for(k=i+1;k<j;k++)
    	{
    		if(a[k]>a[i])
    		{
    			t=a[k];
    			a[k]=a[i];
    			a[i]=t;
    		}
    	}
    }
    if(a[0]==a[j-1])
    printf("No");
    else
    {
    	for(i=0;i<j;i++)
    	{
    		if(a[i]!=a[0])
    		{
    			printf("%d",a[i]);
    			break;
    		}
    	}
    }
}