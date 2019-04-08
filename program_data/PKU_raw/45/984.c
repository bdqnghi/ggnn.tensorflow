int main()
{
 char zfc[2][51];
 int a,b,i;
	 for(i=0;i<2;i++){
		 scanf("%s",zfc[i]);
	 }
	 a=strlen(zfc[1]);
	 b=strlen(zfc[0]);
	 for(i=0;i<a;i++){
		 if(zfc[1][i]==zfc[0][0]&&zfc[1][i+1]==zfc[0][1]){
	        break;
		 }
	 }
	 printf("%d",i);
	  return 0;
}
