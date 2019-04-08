void main()
{
 char str[20][10],string[20][4],d;
 int i,j,m[20]={0},l[20];
 for(i=0;;i++)
 {
	 d='\0';
 if(scanf("%s %s",&str[i],&string[i])==EOF)   break;
	
	 for(j=0;str[i][j]!='\0';j++)   if((int)str[i][j]>m[i])  m[i]=str[i][j];
	 
		 

 

	 for(j=0;str[i][j]!='\0';j++)   if(m[i]==str[i][j])   { l[i]=j;break;}
	 for(j=0;j<=l[i];j++) printf("%c",str[i][j]);
	 for(j=0;j<strlen(string[i]);j++) printf("%c",string[i][j]);
	 for(j=l[i]+1;str[i][j]!='\0';j++)
		 printf("%c",str[i][j]);
	 printf("\n");
 }
}