int main(){
char zf[LEN][LEN];
int a,n,i=0,j;
scanf("%d",&n);
for(i=0;i<n;i++){
		scanf("%s",zf[i]);
	}
for(i=0;i<n;i++){
	a=strlen(zf[i]);
	if((zf[i][0]>=48 && zf[i][0]<=57)){
			printf("no\n");	}
	if((zf[i][0]>=0 &&zf[i][0]<=47)||(zf[i][0]>=58 && zf[i][0]<=64)||(zf[i][0]>=91 && zf[i][0]<=94)||(zf[i][0]==96)||(zf[i][0]>=123 && zf[i][0]<=127)){
	printf("no\n");
	}
	else if(zf[i][0]<48 ||zf[i][0]>57){
		for(j=0;j<a;j++){
			if((zf[i][j]>47 &&zf[i][j]<58)||(zf[i][j]>64 && zf[i][j]<91)||(zf[i][j]==95)||(zf[i][j]>96 && zf[i][j]<123)){
				continue;

}
			if((zf[i][j]>=0 &&zf[i][j]<=47)||(zf[i][j]>=58 && zf[i][j]<=64)||(zf[i][j]>=91 && zf[i][j]<=94)||(zf[i][j]==96)||(zf[i][j]>=123 && zf[i][j]<=127)){
				printf("no\n");
				break;
			}
			
			}

	if(j==a){
	printf("yes\n");
	}
	}	

}
return 0;
}