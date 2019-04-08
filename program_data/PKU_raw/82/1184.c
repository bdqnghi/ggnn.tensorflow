
int main(){
	int n,a,b,s=0;
	int sb[120];
	for(int k=0;k<=120;k++){
	sb[k]=0;
	}
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);

		if(a<=140&&a>=90&&b>=60&&b<=90){
			s++;
			sb[i]=s;
		
		}

		else s=0;
	}
	for(int j=0;j<120;j++){
		if(sb[j+1]<sb[j])
			sb[j+1]=sb[j];
	}
	printf("%d",sb[119]);
			




return 0;
}


