
void main()
{
	char a[5000]={""},b[200][20]={0};
	int i,j,n,k,l,m,s,max,min,num[200]={0};
    scanf("%d\n",&m);
	gets(a);

	for(k=0,i=0,j=0;*(a+k)!=0;k++)
		if(*(a+k)==' '||*(a+k)==',')
		{
			*(num+i)=j;
			i++;
			j=0;
		}
		else 
		{
			*(*(b+i)+j)=*(a+k);
			j++;
		}
	
		*(num+i)=j;
		n=i;
	    l=s=0;
		max=min=*(num+0);
	
	for(i=1;i<=n;i++)
		if(*(num+i)>max)
		{
			max=*(num+i);
			l=i;
		}
		else if(*(num+i)<min&&*(num+i)>0)
		{
			min=*(num+i);
			s=i;
		}
	
	puts(*(b+l));
	puts(*(b+s));

}
