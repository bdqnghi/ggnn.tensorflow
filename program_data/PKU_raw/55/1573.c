int main()
{
	 int a,n,b,s,i,j,k,l,sz[100],zh[100];
	 char zf[100],tj[100];
	 scanf("%d %s %d",&a,zf,&b);
	 l=strlen(zf);
	 for(i=0;i<l;i++){
	 	if(zf[i]>='0'&&zf[i]<='9'){
			sz[i]=zf[i]-'0';
		}
		else if(zf[i]>='a'&&zf[i]<='z'){
			sz[i]=zf[i]-'a'+10;
		} 
		else if(zf[i]>='A'&&zf[i]<='z'){
			sz[i]=zf[i]-'A'+10;
		}		
	 }
	 s=0;
	 for(i=0;i<l;i++){
		s=s*a+sz[i];	
	 }
	 j=0;
	 if(s==0){
	 	zh[j]=0;
	 	j++;
	 }
	 else{
		 while(s>0){
			zh[j]=s%b;
			s=s/b;	
			j++;
		 }
	 }
 	 for(k=0;k<j;k++){
		if(zh[k]>9){
			tj[k]='A'+zh[k]-10;
		}	
		else{
			tj[k]=zh[k]+'0';
		}
	 }
	 for(k=j-1;k>=0;k--){
		printf("%c",tj[k]);	
	 }
	 return 0;
}
	 
