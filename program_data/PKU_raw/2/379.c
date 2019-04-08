struct tushu{
int bianhao;
char writer[27];
}book[1000];
void jishu(struct tushu *p1,int a[26],int b);
int max(int c[26]);
void shu(struct tushu *p2,int d,int e);

int main(){
	int n,i,m;
	int zimu[26];
	struct tushu *pointer;
	pointer=&book[0];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %s",&book[i].bianhao,&book[i].writer);
	}
	jishu(pointer,zimu,n);
	m=max(zimu);
	shu(pointer,m,n);
	return 0;
}
void jishu(struct tushu *p1,int a[26],int b){
	int j,k,diji;
	for(j=0;j<26;j++){
		a[j]=0;
	}
	for(j=0;j<b;j++){
		k=0;
		do{
			diji=(*(p1+j)).writer[k]-'A';
			a[diji]++;
			k++;
		}while((*(p1+j)).writer[k]!='\0');
	}
}
int max(int c[26]){
	int k,da,jieguo=0;
	da=c[0];
	for(k=1;k<26;k++){
		if(c[k]>da){
			da=c[k];
			jieguo=k;
		}
	}
	printf("%c\n%d\n",65+jieguo,da);
	return(jieguo);
}
void shu(struct tushu *p2,int d,int e){
	char ai=65+d;
	int x,y;
	for(x=0;x<e;x++){
		y=0;
		do{
			if((*(p2+x)).writer[y]==ai){
				printf("%d\n",(p2+x)->bianhao);
			}
			y++;
		}while((*(p2+x)).writer[y]!='\0');
	}	
}


