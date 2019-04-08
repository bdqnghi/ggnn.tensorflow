int main(){
 struct qujian{
	int a;
	int b;
 }q[MAX_NUM];
 int s[MAX_LEN]={0};
 int n,i,j,min_a,max_b;
 scanf("%d",&n);
 scanf("%d%d",&q[1].a,&q[1].b);
 min_a=q[1].a;
 max_b=q[1].b;
 for(j=q[1].a;j<q[1].b;j++)
	 s[j]=1;
 for(i=1;i<n;i++){
     scanf("%d%d",&q[i].a,&q[i].b);
	 if(q[i].a<min_a)
		 min_a=q[i].a;
	 if(q[i].b>max_b)
		 max_b=q[i].b;
	 for(j=q[i].a;j<q[i].b;j++)
		 s[j]=1;
 }s[max_b]=1;
 for(i=min_a;i<=max_b;i++){
	 if(s[i]==0){
		 printf("no");
	     break;
	 }
 }if(i==max_b+1)
	 printf("%d %d",min_a,max_b);
return 0;
}