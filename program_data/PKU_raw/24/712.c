int main()
{
	char s1[100],p[50][100];
	gets(s1);
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
			 p[y][j]=s1[i];
		  }
		  else{
			   p[y][j]='\0';
			   t=i+1;
			   break;
		  }
	   }
	}
	int max=0,min=0;
	for(i=0;i<n;i++){
		if(strlen(p[i])>strlen(p[max]))
			max=i;
		if(strlen(p[i])<strlen(p[min]))
			min=i;
	}
	printf("%s\n%s",p[max],p[min]);
	return 0;
}
