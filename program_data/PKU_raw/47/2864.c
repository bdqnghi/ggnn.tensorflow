int main()
{
	void swap(int *pt1,int *pt2);
	int *pt1,*pt2;
	int a[100],n,i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
   
	if(n%2==0){
		for(i=0;i<n/2;i++){
			pt1=&a[i];
		    pt2=&a[n-1-i];
			swap(pt1,pt2);
		}
	}
	else{
		for(i=0;i<n/2;i++){
			pt1=&a[i];
		    pt2=&a[n-1-i];
			swap(pt1,pt2);
		}
	}
	
	printf("%d",a[0]);
	for(i=1;i<n;i++)
		printf(" %d",a[i]);			
}

void swap(int *pt1,int *pt2)
{
	int temp;
	temp=*pt1;
	*pt1=*pt2;
    *pt2=temp;
}