void main()
{ char str[100],sub[100];
while (scanf("%s%s",str,sub)!=EOF)
{
  int m;
  m=strlen(str);
  int i,j,temp,as[20];
  for(i=0;i<=m-1;i++)
	  as[i]=str[i];
    for(j=1;j<=m-1;j++)
		  if(as[0]<as[j])
		   as[0]=as[j];
   
  char p;
  p=as[0];
  int q;
 for(i=0;i<=m-1;i++)
	  if(str[i]==p)
	  {q=i;break;}
 for(i=m+2;i>=q+1;i--)
	  str[i+3]=str[i];
   str[q+1]=sub[0];
   str[q+2]=sub[1];
   str[q+3]=sub[2];
   str[m+3]='\0';
	  printf("%s",str);
         printf("\n");

           
}
}
