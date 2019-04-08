int main(){
	char a[999],z[200][55];
	int i,j=0,l=0,m,n[200],w;
	gets(a);
	for(i=0;1;i++){
		if(a[i]=='\0'){
		z[j][l]='!';
		w=j;
		break;
		}
		if(a[i]==' '){
		z[j][l]='!';
		j++;
		l=0;
		}
		else{
			z[j][l]=a[i];
			l++;
		}
	}
	l=0;
	for(j=0;j<=w;j++){
		n[l]=0;
		for(i=0;1;i++){
			if(z[j][i]=='!'){
			break;
			}
			n[l]++;
	}
		l++;
	}
	m=0;
	w=0;
	for(i=1;i<l;i++){
		if(n[m]>n[i]){
		m=i;
		}
	if(n[w]<n[i]){
		w=i;
		
		}
	}
	for(i=0;z[w][i]!='!';i++){
	printf("%c",z[w][i]);
	}
	printf("\n");
	for(i=0;z[m][i]!='!';i++){
	printf("%c",z[m][i]);
	}

return 0;}