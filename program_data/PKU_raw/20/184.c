int main()
{int p,j,k,len,i;
char str[100][10]={'\0'},ch[100][3],sub[100][20],tol[100][30];
for(i=0;i<100;i++)
{	gets(tol[i]);
	len=strlen(tol[i]); 
	if(len==0) break;
	for(j=0;;j++)
		{str[i][j]=tol[i][j];
		if(str[i][j]==' ') {str[i][j]='\0';break;}}
	for(k=0;k<3;k++)
	   {ch[i][k]=tol[i][j+1];j++;}
	for(j=1,p=0;j<len;j++)
		{  if(str[i][p]<str[i][j]) p=j;
		}
		
	strncpy(sub[i],str[i],p+1);
	
	sub[i][p+1]=ch[i][0];sub[i][p+2]=ch[i][1];sub[i][p+3]=ch[i][2];
    for(j=0;j<=len-1-p;j++)
		sub[i][p+4+j]=str[i][p+j+1];
 }
printf("%s",sub[0]);
for(i=1;strlen(tol[i])!=0;i++)
	{ printf("\n%s",sub[i]); }
return 0;
}