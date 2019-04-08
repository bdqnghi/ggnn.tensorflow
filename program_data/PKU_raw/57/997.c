int main(){
	int n,i,p,q;
	char s[51];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	   scanf("%s",s);
	   q=0;
	   for(p=0;s[p]!='\0';p++){
		   q++;
	   }
	   if(s[q-2]=='e'&&s[q-1]=='r'){
		   s[q-2]='\0';
	   }else if(s[q-3]=='i'&&s[q-2]=='n'&&s[q-1]=='g'){
		   s[q-3]='\0';
	   }else if(s[q-2]=='l'&&s[q-1]=='y'){
		   s[q-2]='\0';
	   }
	   printf("%s\n",s);
	   }
	return 0;
}