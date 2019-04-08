int main()
{
int n,m,i,j,k,w;

char sfc[280];
scanf("%d",&n);
for (i=0;i<n;i++) {

scanf("%s",sfc);

if((sfc[strlen(sfc)-3])=='i')sfc[strlen(sfc)-3]=0;
else sfc[strlen(sfc)-2]=0;	
	


printf("%s\n",sfc);
}
return 0;
}
