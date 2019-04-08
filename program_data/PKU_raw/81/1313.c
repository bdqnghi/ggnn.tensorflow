
void reverse(int a[5][5],int b,int c);
int main(int argc, char* argv[])
{
	int su[5][5];
	int hang1,hang2,panduan;
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		scanf("%d",&su[i][j]);		
		}	
	}
	scanf("%d %d",&hang1,&hang2);
	reverse(su,hang1,hang2);
	return 0;
}
void reverse(int a[5][5],int b,int c){
	int panduan,k,l;
	int tihuan[5];
	if(((b>=0)&&(b<5))&&((c<5)&&(c>=0))){
		panduan=1;
		for(k=0;k<5;k++){
				if(b==c){break;}
				tihuan[k]=a[b][k];
				a[b][k]=a[c][k];
				a[c][k]=tihuan[k];
			}
	}else{panduan=0;}
	if(panduan){
		for(k=0;k<5;k++){
			for(l=0;l<4;l++){
				printf("%d ",a[k][l]);		
			}
			printf("%d\n",a[k][4]);
		}	
	}else{
		printf("error");
	}


}