int main(){
int n;
scanf("%d",&n);
int i,j,l,m;
char a[266];
for(i=0;i<n;i++){
scanf("%s",&a);
for(j=0;a[j]!='\0';j++){
	if(a[j]=='A'){
	printf("T");
	}
		if(a[j]=='T'){
	printf("A");
	}
			if(a[j]=='C'){
	printf("G");
	}
				if(a[j]=='G'){
	printf("C");
	}
}
printf("\n");
}
return 0;}