struct qj{
    int a,b;
};
int main()
{
struct qj jg[50000];
int n,i,m;
double j;
int sz1[50000],sz2[50000];
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d %d",&jg[i].a,&jg[i].b);
	sz1[i]=jg[i].a;
	sz2[i]=jg[i].b;
}
for(i=0;i<n;i++){
	if(sz1[0]>sz1[i]){
		sz1[0]=sz1[i];
	}
}
for(i=0;i<n;i++){
	if(sz2[0]<sz2[i]){
		sz2[0]=sz2[i];
	}
}
for(j=sz1[0];j<sz2[0];j+=0.5){
	for(i=0;i<n;i++){
		if(j>=jg[i].a&&j<=jg[i].b){
			m=0;
			break;
		}else{
			m=1;
		}
	}
	if(m==1){
		printf("no");
		break;
	}
}
if(m==0){
	printf("%d %d",sz1[0],sz2[0]);
}
return 0;
}
