/* Note:Your choice is C IDE */
void main()
{
	char c;
    int pre[1000][1000],beg[1000],en[1000],pptt[1000],tmax,pmax,p,t,n,sl,i;
    /*????????????*/
    n=1;
    scanf("%d,",&beg[0]);
    do
    {
    	n++;
    	scanf("%d%c",&beg[n-1],&c);
    }while(c==44&&n<=1000);
    scanf("%d",&en[0]);
    for(i=1;i<=n-1;i++) scanf(",%d",&en[i]);
    tmax=en[0];
    for(i=1;i<=n-1;i++)
    {
    	if(tmax<en[i]) tmax=en[i];
    }
    
    /*???????????*/
    for(p=0;p<=n-1;p++)
    {
    	for(t=0;t<=tmax-1;t++)
    	pre[p][t]=0;
    }
    p=0;
    do
    {
    	t=0;
    	do
    	{
    		if(beg[p]<=t&&(t+1)<=en[p])
    		pre[p][t]=1;
    		t++;
    	}while(t<=tmax-1);
    	p++;
    }while(p<=n-1);
    
    /*????????*/
    for(i=0;i<=tmax;i++) pptt[i]=0;
    for(t=0;t<=tmax-1;t++)
    {
    	for(p=0;p<=n-1;p++)
    	pptt[t]=pptt[t]+pre[p][t];
    }
    /*?????????*/
    pmax=pptt[0];
/*    for(t=0;t<=tmax-1;t++)
    printf("%d ",pre[1][t]);*/
    for(t=1;t<=tmax-1;t++)
    	if(pmax<pptt[t]) pmax=pptt[t];
    	
    printf("%d %d",n,pmax);   
}