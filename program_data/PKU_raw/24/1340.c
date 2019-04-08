
int main(){
	char s[200],d[50][50];
	int i,k=0,j=0,a[100]={0},max,min;
	int p,q=0,t,w=1;
	gets(s);
	for(i=0;;i++){
		d[k][q]=s[i];
		a[k]++;
		if((s[i+1]==' ')){
			q++;
			d[k][q]='\0';
			k++;
			q=0;
			i=i+1;}
		if((s[i+1]=='\0')){
			q++;
			d[k][q]='\0';
			k++;
			q=0;
			break;}
		else q++;
	}
	max=a[0];min=a[0];
	for(i=0;i<k;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	for(i=0;i<k;i++){
			if(a[i]==max){
				w=2;
				if(i==0) t=0;
				else t=1;
				for(j=t;d[i][j]!='\0';j++){
					printf("%c",d[i][j]);
				}
			}
		if(w==2) break;
	}

	printf("\n");
	for(i=0;i<k;i++){

		if(a[i]==min){
			w=0;
			if(i==0) t=0;
			else t=1;
			for(j=t;d[i][j]!='\0';j++){
				 printf("%c",d[i][j]);
			}
		}
		if(w==0) break;
	}
}