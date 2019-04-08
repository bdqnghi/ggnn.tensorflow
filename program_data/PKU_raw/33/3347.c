
int main()
{
	struct zf
	{
		char s[1000];
		char j[1000];
    }zf[1000];
   int n,i,h;
   scanf("%d\n",&n);
   for(i=0;i<n;i++)
   {
   gets(zf[i].s);
   }
   for(i=0;i<n;i++)
   {
       for(h=0;zf[i].s[h]!='\0';h++)
	   {
		   if(zf[i].s[h]=='A'){zf[i].j[h]='T';}
		   else if(zf[i].s[h]=='T'){zf[i].j[h]='A';}
		   else if(zf[i].s[h]=='C'){zf[i].j[h]='G';}
		   else if(zf[i].s[h]=='G'){zf[i].j[h]='C';}
		   
	   }
	   zf[i].j[h]='\0';
   }
   for(i=0;i<n;i++)
   {
       printf("%s\n",zf[i].j);
   }
  return 0;
}