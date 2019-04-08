int main(){
	int i,j,p,q,len;
    char mark[301];
	scanf("%s",mark);
	len=strlen(mark);
	for(p=len-1;p>0;p--){
		for(q=0;q<p;q++){
			if(mark[q]>mark[q+1]){
				char a;
				a=mark[q];
				mark[q]=mark[q+1];
				mark[q+1]=a;
			}
		}
	}
	int judge=0;
	for(i=0;i<len;i++){
		if(mark[i]>=97&&mark[i]<=122){
			judge++; 
			int n=1;
            for(j=i+1;j<len;j++){
				if(mark[j]==mark[i]){
					n++;
					mark[j]=0;
				}
			}
			if(n!=0)
				printf("%c=%d\n",mark[i],n);
		}
	}
	if(judge==0)
		printf("No\n"); 
	return 0;
}
