int main()
{
	struct m{
	char id[10];
	int year;
	}p[100],a[100],tmp;
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%s%d",p[i].id,&p[i].year);
	if(p[i].year>=60){
		a[k]=p[i];
		k++;
		p[i].year=0;
	}
	}
	for(i=0;i<k;i++){
		for(j=k-1;j>i;j--){
			if(a[j].year>a[j-1].year){
			tmp=a[j-1];
			a[j-1]=a[j];
			a[j]=tmp;
			}
		}
		}
	for(i=0;i<k;i++){
	printf("%s\n",a[i].id);
	}
	for(i=0;i<n;i++){
	if(p[i].year==0)
	continue;
	printf("%s\n",p[i].id);
	}
	return 0;


}