int main()
{
 char s[100],a[100],b[100],zj[100][100];
 int i=0,k,t=0;
 gets(s);
 gets(a);
 gets(b);
 while(s[i]!='\0')
 {
	  k=0;
	  while(s[i]!=' '&&s[i]!='\0')
	  {
		   zj[t][k]=s[i];
		   k++;
		   i++;
	  } 
	  zj[t][k]='\0'; //???????
	  while(s[i]==' ')
	  {
		   i++;
	  }
	  t++;
 }
  zj[t][k+1]='\0';
 for(i=0;i<t;i++)
 {

	  if(strcmp(zj[i],a)==0)
	  {
				   strcpy(zj[i],b);
	  }
 }
 for(i=0;i<t-1;i++)
 {
	printf("%s ",zj[i]);
 }
 printf("%s",zj[i]);//??????
 return 0;
}
 