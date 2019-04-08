int main()
{
	char s1[100],s2[100],s3[100],p[100];
	gets(s1);
	gets(s2);
	gets(s3);
	strcat(s1," ");
	int len,i,j,n=0,y;
	len=strlen(s1);
	for(i=0;i<len;i++){
		if(s1[i]==' ')
			n++;
	}
	int t=0;
	for(y=0;y<n;y++){
	   for(i=t,j=0;i<len;i++,j++){
		  if(s1[i]!=' '){
			 p[j]=s1[i];
		  }
		  else{
			   p[j]='\0';
			   t=i+1;
			   break;
		  }
	   }
	   if(strcmp(p,s2)==0){
		   strcpy(p,s3);
	   }
	   printf("%s",p);
	   if(y<n-1)
		   printf(" ");
	
	}
	
}
