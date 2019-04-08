
int baoshu(int n,int m)
{
	int i,k,*p,x,sum,j,last,num[1000];
	k=1;
	p=num;   /*??p??*/
	for(i=0;i<n;i++)
	{
		*(p+i)=i+1;}
	
	for(i=0;i<m*n*n;i++)    
	{
	    sum=0;
		for(j=0;j<n;j++) if(*(p+j)!=0) {sum=sum+1;last=j+1;}
		if(sum==1) break;
	    x=i%n;          /*?????*/
		if(*(p+x)!=0) 
		{if(k==m) {*(p+x)=0;k=0;}
		k=k+1;}
		
	}
  return last;
}
void main()
{
	int g,h,s,monkey;

	for(s=0;s<100;s++)
	{
	scanf("%d %d", &g,&h);
	if(g==0 && h==0)	break;
	else {monkey=baoshu(g,h);
	printf("%d\n",monkey);}
	}
	
}