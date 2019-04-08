int main()
{  int len=0,len1=0,len2=100,n,i;
   char max[30],min[30],temp[30],c;
   scanf("%d",&n);getchar();
   for(i=0;i<n;)
	  { c=getchar();
   if(c!=' '&&c!='\n') temp[len]=c,len++;
   else { temp[len]='\0';if(len>len1) {strcpy(max,temp);len1=len;}
   if(len<len2) {strcpy(min,temp);len2=len;}len=0;i++;}
   }
   puts(max);
   puts(min);
   return 0;
}