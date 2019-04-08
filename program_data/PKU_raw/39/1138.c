
int main(int argc, char* argv[])
{
	struct stu{
		char name[20];
		int a;//qi mo
		int b;//ban ji
		char c;//ban gan
		char d;//xi bu
		int e;//lun wen
	}str[101];
	int n;
	scanf("%d",&n);
	int a[101];//qian shu
	for(int k=1;k<=n;k++){
		a[k]=0;}
	int sum=0;//zong qian
	for(int i=1;i<=n;i++){
		scanf("%s %d %d %c %c %d",&str[i].name,&str[i].a,&str[i].b,&str[i].c,&str[i].d,&str[i].e);}
	for(int j=1;j<=n;j++){
		if(str[j].a>80&&str[j].e>=1){
			a[j]+=8000;}
		if(str[j].a>85&&str[j].b>80){
			a[j]+=4000;}
		if(str[j].a>90){
			a[j]+=2000;}
		if(str[j].a>85&&str[j].d=='Y'){
			a[j]+=1000;}
		if(str[j].b>80&&str[j].c=='Y'){
			a[j]+=850;}
		sum+=a[j];}
	int w=a[1],q=1;
	for(int t=2;t<=n;t++){
		if(a[t]>w){
			w=a[t];

			q=t;}
	}
	printf("%s\n",str[q].name);
	printf("%d\n",a[q]);
	printf("%d\n",sum);
	return 0;
}
