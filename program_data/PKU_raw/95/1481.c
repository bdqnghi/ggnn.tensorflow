int main()
{
   int n,m,i,j,k,s=0;
   char a[2][80];
   gets(a[0]);
   gets(a[1]);
   for(i=0;i<2;i++)
   for(j=0;;j++)
   {
	if((a[i][j]>='A')&&(a[i][j]<='Z'))
	a[i][j]=a[i][j]-'A'+'a';
	if(a[i][j]==0)break;
   }

   if(strcmp(a[0],a[1])==0)printf("=");
   if(strcmp(a[0],a[1])>0)printf(">");
   if(strcmp(a[0],a[1])<0)printf("<");

   
 
}