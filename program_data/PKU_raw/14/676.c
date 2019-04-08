
struct student{
	int num;
	int chinese;
	int math;
};

void main()
{
	int n,s[100000];
	scanf("%d",&n);
	int i,j,max=0,t;
	struct student a[100000];
	for(i=0;i<n;i++){
		scanf("%d%d%d",&a[i].num,&a[i].chinese,&a[i].math);
		s[i]=a[i].chinese+a[i].math;
	}
	for(i=0;i<3;i++){
		for(j=0;j<n;j++){
			if(s[j]>max){
				max=s[j];t=j;}}
		printf("%d %d\n",a[t].num,max);
			max=0;s[t]=0;}
	
}
