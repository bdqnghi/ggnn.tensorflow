int main(){
	char tmp[100];
	int n,i,j=0,o=0,tmpn;
	struct{
		char num[100];
		int a,k;
	}s[1000],t[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d",s[i].num,&s[i].a);
		if(s[i].a>=60)s[i].k=1;
		else s[i].k=0;
	}
	for(i=0;i<n;i++){
		if(s[i].k==1){
			strcpy(t[j].num,s[i].num);
			t[j].a=s[i].a;
			j++;
			o++;
		}
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(t[j].a<t[j+1].a){
				tmpn=t[j].a;
				t[j].a=t[j+1].a;
				t[j+1].a=tmpn;
				strcpy(tmp,t[j].num);
				strcpy(t[j].num,t[j+1].num);
				strcpy(t[j+1].num,tmp);
			}
		}
	}
	for(i=0;i<o;i++)printf("%s\n",t[i].num);
	for(i=0;i<n;i++){
		if(s[i].k==1)continue;
		printf("%s\n",s[i].num);
	}
	return 0;
}