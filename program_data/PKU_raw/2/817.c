int w[26]={0};//zimu 0 26
int p=0;
void zimu(char a[]){
	int m,i,j;
	char c;
	m=strlen(a);
	for(j=0;j<26;j++){
		c='A'+j;

		for(i=0;i<m;i++){
		if(a[i]==c)
			w[j]++;
	}

	}//for1 end
}
int max(int w[26]){
	int i,max;
	max=w[0];
	for(i=1;i<26;i++)
		if(w[i]>max){
			max=w[i];
			p=i;
		
		}
			return max;
}

void main(){
	char b[300][20];
	int a[300];
	int m,i,j,mm;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d%s",&a[i],b[i]);
	for(i=0;i<m;i++)
		zimu(b[i]);
	mm=max(w);

printf("%c\n",p+'A');
printf("%d\n",mm);
for(i=0;i<m;i++){
	for(j=0;j<(strlen(b[i]));j++)
		if(b[i][j]==(p+'A')){
			printf("%d\n",a[i]);
			break;
		}
}

}
	


