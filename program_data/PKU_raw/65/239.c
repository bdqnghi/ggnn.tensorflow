int main (){
int a[10000],b[10000];
int n;
int x,y;
x=0;
y=0;
scanf("%d",&n);
for (int i=0;i<n;i++){
scanf("%d %d\n",&a[i],&b[i]);
}
for (int i=0;i<n;i++){
	if(a[i]==0){
		if (b[i]==0){x=x;y=y;}
		if (b[i]==1){x++;}
		if (b[i]==2){y++;}
}
    if(a[i]==1){
		if (b[i]==1){x=x;y=y;}
		if (b[i]==2){x++;}
		if (b[i]==0){y++;}
}
	if(a[i]==2){
		if (b[i]==2){x=x;y=y;}
		if (b[i]==0){x++;}
		if (b[i]==1){y++;}
}}
if (x==y){printf("Tie");}
if (x>y) {printf("A");}
if (x<y) {printf("B");}
	return 0;
}
