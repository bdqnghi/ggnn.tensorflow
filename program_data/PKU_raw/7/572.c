int main(){
	char z[257];
	char y[257];
	char t[257];
	int i,j,p;
	int v,x,s;
	int result;
	int word=0;
	int a;
	gets(y);
	gets(z);
	gets(t);
	v=strlen(z);
	x=strlen(y);
	s=strlen(t);
	
	for(i=0;y[i]!='\0';i++){
		if((y[i]==z[0])&&(y[i+v-1]==z[v-1])){
			for(p=0;p<=v-1;p++){
				if(y[i+p]==z[p]){
					word++;
				}
			}
			if(word==v){

			a=i;
			
			result=0;
			}
		}
		//		if(y[i]!=z[0]\\(y[i+v-1]!=z[v-1])){
		//			sum++;
		//		}
		
		
	}
	//	printf("%d",a);
	if(result==0){
		for(i=0;i<=a-1;i++){
			printf("%c",y[i]);
		}
		for(i=0;i<=s-1;i++){
			printf("%c",t[i]);
		}
		for(i=a+v;i<=x-1;i++){
			printf("%c",y[i]);
		}
	}
	else
		printf("%s",y);
	return 0;
}
