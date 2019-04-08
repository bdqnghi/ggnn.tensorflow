int main(){
	int ghus(char a[]);
	void noghus(char a[]);
	int n,i,t,j;
	char b[500];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",b);
		t=ghus(b);
		printf("%s\n",b);
		for(j=1;j<=t;j++){
			noghus(b);
		}
		for(j=0;j<strlen(b);j++){
			if(b[j]=='(') printf("$");
			else if(b[j]==')') printf("?");
			else printf(" ");
		}
		printf("\n");
	}

}


int min(int a,int b){
	if(a<b) return a;
	else return b;
}

int ghus(char a[]){
	int min(int a,int b);
	int m=0,n=0,i;
	for(i=0;i<strlen(a);i++){
		if(a[i]=='(') m++;
		if(a[i]==')') n++;
	}
	return min(m,n);
}

void noghus(char a[]){
	int i,j;
	for(i=0;i<strlen(a)-1;i++){
			if(a[i]=='('){
				for(j=i+1;j<strlen(a);j++){
					if(a[j]==')'||a[j]=='(') break;
				}
				if(a[j]==')'){
					a[i]='o';
					a[j]='o';
				}
			}
	}
}
