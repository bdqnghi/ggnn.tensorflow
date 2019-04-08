struct Aw{
	char na[20];
	int ft,ct,tn,sum;
	char po,ho;
}st[];
int main()
{
	int n,i,j=0,m,sum=0;
	char a,b;
	scanf("%d",&n);
	struct Aw*st=(struct Aw*)malloc(sizeof(struct Aw)*n);
    for(i=0;i<n;i++){
		scanf("%s%d%d%c%c%c%c%d",st[i].na,&st[i].ft,&st[i].ct,&a,&st[i].po,&b,&st[i].ho,&st[i].tn);
        st[i].sum=0;
     	}
	for(i=0;i<n;i++){
		if(st[i].ft>80&&st[i].tn>0){
			st[i].sum+=8000;
			sum+=8000;
		}
		if(st[i].ft>85&&st[i].ct>80){
			st[i].sum+=4000;
			sum+=4000;
		}
		if(st[i].ft>90){
			st[i].sum+=2000;
			sum+=2000;
		}
		if(st[i].ft>85&&st[i].ho=='Y'){
			st[i].sum+=1000;
			sum+=1000;
		}
		if(st[i].ct>80&&st[i].po=='Y'){
			st[i].sum+=850;
			sum+=850;
		}
	}
    for(i=0;i<n;i++){
		if(st[i].sum>j){
			j=st[i].sum;
			m=i;
		}
	}
	printf("%s\n%d\n%d\n",st[m].na,st[m].sum,sum);
	free(st);
	return 0;
}