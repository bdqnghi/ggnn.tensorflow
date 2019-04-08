
void main()
{
   int n;
   scanf("%d",&n);
   char i,in[55][20];
   int j,k;
   for(i=1;i<=n+1;i++)
   {
	   gets(in[i]);
	   k=strlen(in[i]);
	   if(in[i][k-1]=='r'){for(j=0;j<k-2;j++){printf("%c",in[i][j]);}if(j==k-2)printf("\n");}
	   if(in[i][k-1]=='y'){for(j=0;j<k-2;j++){printf("%c",in[i][j]);}if(j==k-2)printf("\n");}
	   if(in[i][k-1]=='g'){for(j=0;j<k-3;j++){printf("%c",in[i][j]);}if(j==k-3)printf("\n");}
   
   }
   
   
}

