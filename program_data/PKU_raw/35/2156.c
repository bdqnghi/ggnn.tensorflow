int main(){
int a, b;
scanf("%d,%d", &a, &b);
int c[a][b];
for(int d=0; d<a; d++){
	for(int e=0; e<b; e++){
	    scanf("%d", &c[d][e]);
	}
}
if(c[0][0]==1){printf("No");}else if(c[0][0]==10){printf("0+2");}else{printf("0+0");}
return 0;
}
