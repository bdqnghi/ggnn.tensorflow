void main()
{
	int i,j,n,num=0;
	struct p{
		char sex[8];
		double ag;
	}a[300],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",a[i].sex,&a[i].ag);
	}
	for(i=0;i<n-1;i++){
		for(j=1;j<n-i;j++){
			if(strcmp(a[j-1].sex,"female")==0&&strcmp(a[j].sex,"female")==0){
				if(a[j-1].ag<a[j].ag){
					temp=a[j-1];
					a[j-1]=a[j];
					a[j]=temp;
				}
			}
			else if(strcmp(a[j-1].sex,"female")==0&&strcmp(a[j].sex,"male")==0){
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
			else if(strcmp(a[j-1].sex,"male")==0&&strcmp(a[j].sex,"male")==0){
				if(a[j-1].ag>a[j].ag){
					temp=a[j-1];
					a[j-1]=a[j];
					a[j]=temp;
				}
			}
		}
	}
	for(i=0;i<n;i++)printf("%.2lf%c",a[i].ag,i==n-1?'\n':' ');
}