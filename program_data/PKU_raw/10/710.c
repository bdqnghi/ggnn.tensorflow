void f(int h[],int a[],int i)
{
	int t,j;
	for(j=0,t=0;j<i;j++) 
			if(h[j]>=h[i]&&a[j]>t) t=a[j]; 
	 a[i]=t+1;
}
void main() 
{ int a[25],k,h[25],t,i; 
	scanf("%d",&k); 
	for(i=0;i<k;i++) 
		scanf("%d",&h[i]);
	for(i=0;i<k;i++) f(h,a,i);	 
	for(i=0,t=0;i<k;i++) 
		if(a[i]>t) t=a[i];
	printf("%d\n",t); 
} 