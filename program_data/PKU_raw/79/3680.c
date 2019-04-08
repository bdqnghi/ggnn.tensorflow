int main(){
int i ;
int n[100],m[100],r,row=0;
do{
	row++;
	scanf("%d %d",&n[row],&m[row]);
	
}while(n[row]!=0&&m[row]!=0);

int a[300];

int j = 0,k=0,L;
for(r=1; r < row; r++){
	for(i = 1; i<= n[r]; i++){
		a[i] = i;
	}

	for(i = 1; i <= n[r]; i++){
		if(a[i]!=0){
			j++;
			if(j==m[r]){
				a[i] = 0;
				k++;
				j=0;
			}
		}
		if(i == n[r]){
			i = 0;
		}
		if(k==n[r]-1){
			for( i =1; i <= n[r]; i++){
				if(a[i]!=0){L= a[i];}
			}
			break;
		}
	}
	j=0;
	k=0;
	printf("%d\n",L);
}


return 0;
}
