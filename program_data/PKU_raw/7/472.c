int main(){
    char ys[1000],re[1000],bt[1000];
    int m, n, i, j, k,ss=0,se=0;
    gets(ys);
	gets(bt);
	gets(re);
	for(i=0;ys[i]!=0;i++){
		if(ys[i]==bt[0]){
			for(k=i+1,j=1;ys[k]!=0&&bt[j]!=0;k++,j++){
				if(ys[k]!=bt[j]){
		break;}}
			if(bt[j]==0){
		ss=i;
		se=k;
		break;
		}}
	}
	if(ss<se){
        if(strlen(bt)<=strlen(re)){
            for(i=ss,j=0;re[j]!=0;i++,j++){
                ys[i]=re[j];
            }
           for(k=se;ys[k]!=0;k++,i++){
                ys[i]=ys[k];
            }
            ys[i]=0;
        }
        else {
            i=strlen(ys)+strlen(re)-strlen(bt);
            for(k=strlen(ys);k>=se;k--,i--){
                ys[i]=ys[k];
            }
           for(i=ss,j=0;re[j]!=0;i++,j++) {
                ys[i]=re[j];
            }
        }
    }
    printf(ys);
    return 0;
}
