  
int main(){
	int a[5][5]; int e,n,m; 
	for(int k=0;k<5;k++){
	for(int i=0;i<5;i++)
			scanf("%d", &a[k][i]);
}
scanf("%d%d", &n,&m);
if(n>4||m>4)
printf("error" );
else {
	for(int i=0;i<5;i++){
e=a[n][i];
a[n][i]=a[m][i];
a[m][i]=e;
	}
for(int k=0;k<5;k++){

	 	for(int i=0;i<4;i++)
			printf("%d ", a[k][i]);
 printf("%d\n", a[k][4]);
 
}

}
	return 0;
}  
