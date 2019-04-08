int count=0,a[25],n,d=0,h,k=0;
void f()
{
	int i,temp=count,temph=h;
	for(i=k;i<n;i++)
	{
		if(a[i]<=h){
		h=a[i];
		k=i+1;count++;
		d=count>d?count:d;
		f();
		count=temp;
		h=temph;
		}
	}
}



void main()
{
	int i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	h=a[0];for(i=1;i<n;i++)if(a[i]>h)h=a[i];
	f();
	printf("%d",d);
}
