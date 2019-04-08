   int main(){
   char dc[51][33];
   int i,n;
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%s",&dc[i]);
   }
   for(i=0;i<n;i++){
	   int j=strlen(dc[i])-1;
	   if(dc[i][j]=='r')
		   dc[i][j-1]='\0';
	   else if(dc[i][j]=='y')
		   dc[i][j-1]='\0';
	   else if(dc[i][j]=='g')
		   dc[i][j-2]='\0';
	   printf("%s\n",dc[i]);
   }
	return 0;
   }