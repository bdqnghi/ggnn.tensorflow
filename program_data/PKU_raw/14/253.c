struct student{
	int num;
	int chinese;
	int math;
};
int main()
{ 
    int n,i;
	scanf("%d",&n);
	struct student a[100000],e ;
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a[i].num,&a[i].chinese,&a[i].math);		
	}
	for(i=0;i<n-1;i++){
		if(a[i].chinese+a[i].math>=a[i+1].chinese+a[i+1].math){
			e=a[i];
			a[i]=a[i+1];
			a[i+1]=e;
		}
	}
	for(i=0;i<n-2;i++){
		if(a[i].chinese+a[i].math>=a[i+1].chinese+a[i+1].math){
			e=a[i];
			a[i]=a[i+1];
			a[i+1]=e;
		}
	}
	for(i=0;i<n-3;i++){
		if(a[i].chinese+a[i].math>=a[i+1].chinese+a[i+1].math){
			e=a[i];
			a[i]=a[i+1];
			a[i+1]=e;
		}
	}
	for(i=n-1;i>n-4;i--){
		printf("%d %d\n",a[i].num,a[i].chinese+a[i].math);
	}
	return 0;
}

