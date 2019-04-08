int main(){
int n,i,j,m,k=0,l,a,b;
scanf("%d\n",&n);
char s[102][102]={' '};


for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
	   scanf("%c\n",&s[i][j]);
	}
}
scanf("%d",&m);
for(l=0;l<m;l++){ 
	
	for(a=1;a<=n;a++){
		for(b=1;b<=n;b++){
	       if(s[a][b]=='-'){
			s[a][b]='@';
			}
		}
	}
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		
		if(s[i][j]=='@'){
		
			if(s[i-1][j]=='.') s[i-1][j]='-';
			if(s[i+1][j]=='.') s[i+1][j]='-';
			if(s[i][j+1]=='.') s[i][j+1]='-';
			if(s[i][j-1]=='.') s[i][j-1]='-';
		}
	}
}
}
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		if(s[i][j]=='@'){
			k++;
		}
	}
}
printf("%d",k);
return 0;
}