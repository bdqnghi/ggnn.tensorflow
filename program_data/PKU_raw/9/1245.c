struct huanzhe
{char id[11];
int age;
}sick[110];
int panduan(int *p1,int *p2,int a,int b);
void paixu(int *p3,int *p4,int c);
int main(int argc, char* argv[])
{
	int n,i,pan;
	int ji[110]={1};
	int zhangzhe[110];
	int *pointer1,*pointer2;
	pointer1=ji;
	pointer2=zhangzhe;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",&sick[i].id,&sick[i].age);	
	}
	for(i=0;i<n;i++){
		pan=panduan(pointer1,pointer2,sick[i].age,i);
		if(pan){sick[i].age=0;}
	}
	paixu(pointer1,pointer2,ji[0]);
	for(i=1;i<ji[0];i++){
		printf("%s\n",&sick[ji[i]].id);
	}
	for(i=0;i<n;i++){
		if(sick[i].age==0){
			continue;
		}
		printf("%s\n",sick[i].id);
	}
	return 0;
}
int panduan(int *p1,int *p2,int a,int b){
	int jieguo=0;
	if(a>=60){
		*(p1+*p1)=b;
		*(p2+*p1)=a;
		(*p1)++;
		jieguo=1;
	}
	return(jieguo);
}
void paixu(int *p3,int *p4,int c){
	int j,k,temp;
	for(j=0;j<c;j++){
		for(k=1;k<c-1;k++){
			if(*(p4+k)<*(p4+k+1)){
				bian(p3);
				bian(p4);
			}
		}			
	}

}