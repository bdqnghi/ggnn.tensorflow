void main()
{
 int n,i,j,k;
 char **p;
 char a,b[10];
 scanf("%d",&n);
 gets(b);
 p=(char **)malloc(n*sizeof(char));
 for(i=0;i<n;i++)
 {
  p[i]=(char *)malloc(10000*sizeof(char));
  gets(p[i]);
  j=0;
  while(*(p[i]+j)!='\0')
  {
   a=*(p[i]+j);
   k=1;
   while(*(p[i]+j+k)!='\0')
   {
	   if(*(p[i]+j+k)==a) {*(p[i]+j)='0'; *(p[i]+j+k)='0';}
	   k++;
   }
   j++;
  }
  j=0;
  while(*(p[i]+j)!='\0')
  {
	  if(*(p[i]+j)!='0') {printf("%c\n",*(p[i]+j));break;}
	  j++;
  }
  if(*(p[i]+j)=='\0') printf("no");
 }
}