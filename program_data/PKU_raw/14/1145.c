int main()
{
	int n,i,j,b,c,d,t,z;
	struct a
	{
		int num;
		int b;
		int c;
		int d;
	}a[4];
	scanf("%d",&n);
	for(i=0;i<3;i++){
		scanf("%d %d %d",&a[i].num,&a[i].b,&a[i].c);
		a[i].d=a[i].b+a[i].c;
	}
	for(j=0;j<2;j++){
		for(i=0;i<2-j;i++){
			if(a[i].d<a[i+1].d){
				t=a[i].d;
				z=a[i].num;
				a[i].d=a[i+1].d;
				a[i].num=a[i+1].num;
				a[i+1].d=t;
				a[i+1].num=z;
			}
		}
	}
	for(i=3;i<n;i++){
		scanf("%d %d %d",&a[3].num,&a[3].b,&a[3].c);
		a[3].d=a[3].b+a[3].c;	
	            if(a[3].d>a[0].d){
				a[2]=a[1];
				a[1]=a[0];
				a[0]=a[3];
			}
			else if(a[3].d>a[1].d){
				a[2]=a[1];
				a[1]=a[3];
			}
			else if(a[3].d>a[2].d){
				a[2]=a[3];
		}
	}
	printf("%d %d\n",a[0].num,a[0].d);
	printf("%d %d\n",a[1].num,a[1].d);
	printf("%d %d\n",a[2].num,a[2].d);
	return 0;
}
