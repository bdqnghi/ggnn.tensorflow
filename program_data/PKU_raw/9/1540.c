void main()
{
	int n,i,j;
	struct p{
		char id[30];
		int ag;
	}a[105],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",a[i].id,&a[i].ag);
	}
	for(i=0;i<n-1;i++){
		for(j=1;j<n-i;j++){
			if(a[j-1].ag>=60&&a[j].ag>=60){
				if(a[j-1].ag<a[j].ag){
					temp=a[j-1];
					a[j-1]=a[j];
					a[j]=temp;
				}
			}
			else if(a[j-1].ag<60&&a[j].ag>=60){
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)printf("%s\n",a[i].id);
}