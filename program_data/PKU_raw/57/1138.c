int main(){
    int n,a,b;
	scanf("%d",&n);
	char dc[n][33];
	char cd[n][33];
	for(int i=0;i<n;i++){
	   scanf("%s",dc[i]);
       a=strlen(dc[i]);
	   if(dc[i][a-1]==114||dc[i][a-1]==121){
              b=a-2;
	   }
       if(dc[i][a-1]==103){
              b=a-3;
	   }
	   for(int x=0;x<b;x++){
	         cd[i][x]=dc[i][x];
	   }
cd[i][b]=0;
	   printf("%s\n",cd[i]);
	}
    return 0;
}