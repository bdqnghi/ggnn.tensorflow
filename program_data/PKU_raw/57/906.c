int main(){
int i,n,k;
char zfc[50][35];
scanf("%d",&n);
for(i=0;i<50;i++){
	for(k=0;k<35;k++){
	zfc[i][k]='\0';
	}
}
for(i=0;i<n;i++){
scanf("%s",&zfc[i]);
}
for(i=0;i<n;i++){
	for(k=0;k<32;k++){
		if(zfc[i][k]=='e'&&zfc[i][k+1]=='r'&&zfc[i][k+2]=='\0'){
		zfc[i][k]='\0';
		}
		else if(zfc[i][k]=='l'&&zfc[i][k+1]=='y'&&zfc[i][k+2]=='\0'){
		zfc[i][k]='\0';
		}
		else if(zfc[i][k]=='i'&&zfc[i][k+1]=='n'&&zfc[i][k+2]=='g'&&zfc[i][k+3]=='\0'){
		zfc[i][k]='\0';
		}
	}
}
for(i=0;i<n;i++){
printf("%s\n",zfc[i]);
}
return 0;
}
