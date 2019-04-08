struct f{
char id[10];
int old;
}st[1000],stu[1000],temp;
int main()
{
	int n,i,j,a,b,c;
	char cc,aa,x[1000],y[1000];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s%c%d%c",st[i].id,&aa,&st[i].old,&cc);}
	a=0;
	for(j=1;j<=n;j++){
		if(st[j].old>=60){
			a++;
			stu[a]=st[j];
		}}
	for(i=a-1;i>=0;i--){
		for(j=1;j<=i;j++){
			if(stu[j].old<stu[j+1].old){
				temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;}}}
	for(i=1;i<=a;i++){
		puts(stu[i].id);}
	for(i=1;i<=n;i++){
		if(st[i].old<60)puts(st[i].id);}
}