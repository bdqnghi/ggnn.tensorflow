int n[2];
void input(int a[],int b[],int n[2])
{
	int i;
	scanf("%d %d",&n[0],&n[1]);
	for(i=0;i<n[0];i++)
	scanf("%d",&a[i]);
	for(i=0;i<n[1];i++)
	scanf("%d",&b[i]);
}
void sort(int *p,int *q,int *x)
{
	int i,j,k,t;
	for(i=0;i<(*x-1);i++)
	{
		k=i;
	    for(j=i+1;j<(*x);j++)
		  if(*(p+j)<*(p+k)) k=j;
		if(k!=i)
		{t=*(p+i);*(p+i)=*(p+k);*(p+k)=t;}
	}
	for(i=0;i<*(x+1)-1;i++)
	{
		k=i;
	    for(j=i+1;j<*(x+1);j++)
		  if(*(q+j)<*(q+k)) k=j;
		if(k!=i)
		{t=*(q+i);*(q+i)=*(q+k);*(q+k)=t;}
	}	
}
void fold(int *p,int *x,int *q,int *w)
{
	int i;
	for(i=0;i<*x;i++,w++,p++)
		*w=*p;
	for(;i<(*x)+(*(x+1));i++,w++,q++)
		*w=*q;
}
void putout(int *w,int *x)
{
    int i;
	for(i=0;i<(*x)+(*(x+1))-1;i++)
		printf("%d ",*(w+i));
	printf("%d\n",*(w+i));
}
void main()
{
	int a[100],b[100],c[200];
	input(a,b,n);
	sort(a,b,n);
	fold(a,n,b,c);
	putout(c,n);
}
