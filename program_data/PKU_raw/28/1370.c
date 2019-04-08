
int main(){
		char a[3000];
		gets(a);

		int len=strlen(a);
		int b[300];//???

		int temp=0;//?????
		int num=0;
		int i;

		for(i=0;i<len;i++){
			if(a[i]==' '&&a[i-1]!=' '){
				
				b[num]=i-temp;
				num+=1;
				
			}
			if(a[i]==' '&&a[i+1]!=' '){
				temp=i+1;
			}
		}

		
	
		b[num]=len-temp;
		num++;

		//printf("%d %d\n",len,temp);

		for(i=0;i<num;i++){
			if(i==0){
				printf("%d",b[i]);
			}
			if(i!=0){
				printf(",%d",b[i]);
			}
		}

	    return 0;
}