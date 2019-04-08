

void main()
{
   char str[1000];
   char c;
   int i=0,j=0,k,t;  /*??????*/
   int a[300]={0};
   gets(str);
   
   for(i=0;str[i]!='\0';i++)
   {
	  
	  if(str[i]!=' ')
	  a[j]++;
	  else if(str[i]==' '&&str[i+1]!=' ')
	  j++;
   }
   printf("%d",a[0]);
   for(i=1;i<=j;i++)
	printf(",%d",a[i]);
}