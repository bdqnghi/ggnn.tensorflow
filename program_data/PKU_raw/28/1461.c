int main()
{

    char s[30000];int t[300];int w[300];int k=1;int n=0;int ww;int f=1;
gets(s);t[0]=0;

for(int d=0;d<strlen(s);d++)
{if(s[d]==' '){f=0;break;}}

if(f==0){
for(int i=1;i<strlen(s);i++)
  {
        if(s[i]!=' '&&s[i-1]==' ')
        {t[k]=i;k++;}
        }
        
     
        w[k-1]=strlen(s)-1;
        for(int j=0;j<strlen(s);j++)
  {
        if(s[j]!=' '&&s[j+1]==' ')
        {w[n]=j;n++;}
        }
        
int chazhi[k];
for(int o=0;o<k;o++)
   {chazhi[o]=w[o]-t[o]+1;}     
   
   for(int oo=0;oo<k-1;oo++)
   {printf("%d,",chazhi[oo]);ww=oo;} 
   printf("%d",chazhi[ww+1]);
   
}
  if(f==1){printf("%d",strlen(s));}     
	return 0;
}
