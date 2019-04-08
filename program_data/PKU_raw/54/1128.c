int key(int rest,int monkey,int count,int k)
{
	if(count==1)
        return (rest>k&&(rest-k)%monkey==0)?1:0;
	else
		return (rest>k&&(rest-k)%monkey==0)?key((rest-k)*(monkey-1)/monkey,monkey,count-1,k):0;
}
void main()
{
	int i,n,k;
	scanf("%d %d",&n,&k);
	for(i=1;;i++)
		if(key(i,n,n,k)==1)
		{
			printf("%d\n",i);
		    break;
		}
}
		
