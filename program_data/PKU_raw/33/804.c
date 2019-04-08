int main(){
int r;
int i=1,j=0;
char ch[1000][256];
scanf("%d",&r);
for(i=1;i<=r;i++){
   scanf("%s",ch[i]);
}
i=1;
int p;
 for(i=1;i<=r;i++){
	 p=strlen(ch[i]);
	 for(j=0;j<p;j++){
	   if(ch[i][j]=='A'){
		 ch[i][j]='T';
		 continue;
	   }
	   if(ch[i][j]=='T'){
		 ch[i][j]='A';
		 continue;
	   }
      if(ch[i][j]=='G'){
		 ch[i][j]='C';
		 continue;
	  }
      if(ch[i][j]=='C'){
		 ch[i][j]='G';
		
	  }
	}
 }
i=1;
for(i=1;i<=r;i++){
	
	printf("%s\n",ch[i]);

} 
 return 0;
}