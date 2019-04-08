int main(){
	int n,i=0,j=0;
	char zfc[256];
	scanf("%d",&n);
for(j=0;j<n;j++)
  {
    scanf("%s",zfc);
    for(i=0;zfc[i]!='\0';i++){
      if(zfc[i]=='A')
		  zfc[i]='T';
      else if(zfc[i]=='T')
		  zfc[i]='A';
      else if(zfc[i]=='G')
		  zfc[i]='C';
      else if(zfc[i]=='C')
		  zfc[i]='G';
	}
   printf("%s\n",zfc);

  }
  

return 0;
}