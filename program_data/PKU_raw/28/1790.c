int main(){
	int n,i=0,t=0;
	char c;
	for(;;){
		scanf("%c",&c);
		if(c=='\n'){
			if(i!=0)printf(",");
			printf("%d",t);
			break;
		}
		else if(c==' '){
			if(t==0)continue;
			else{
			if(i!=0)printf(",");
			printf("%d",t);
			t=0;
			i=1;
			}
		}
		else t++;
	}
	return 0;
}