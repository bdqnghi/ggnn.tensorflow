int main(){
	int n,shou,shu,h,max,i;
	scanf("%d\n",&n);
	max=0;
	h=0;
	for(i=1;i<=n;i++){
		scanf("%d%d",&shou,&shu);
		if(shou>=90&&shou<=140&&shu>=60&&shu<=90){
			h++;
		}else{
			if(max<h){
				max=h;
			}
			h=0;
		}
	}
if(max<h){
				max=h;
			}
	printf("%d\n",max);
	return 0;
}
