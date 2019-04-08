int main(){
	char str[MAX+1];
	int n,i,j,len;
gets(str);
n=atoi(str);
  for(i=0;i<n;i++){
	  gets(str);
 len=strlen(str);
	  if((str[0]<='z'&&str[0]>='a')||(str[0]<='Z'&&str[0]>='A')||str[0]=='_'){
	   for(j=1;j<len;j++){
		   if((str[j]<='z'&&str[j]>='a')||(str[j]<='Z'&&str[j]>='A')||(str[j]=='_')||(str[j]<='9'&&str[j]>='0'))
			   continue;
		   else
			   break;
	   }
	   if(j==len)
		   printf("yes\n");
		else
printf("no\n");
	  }
	  else
printf("no\n");
  }

	return 0;
}