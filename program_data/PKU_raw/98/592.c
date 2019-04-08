int main()
{
	
int i,j,k=0,l,m,n;
	
char word[40];
	
scanf("%d",&n);
	
scanf("%s",word);
	
k=k+strlen(word)+1;
	
printf("%s",word);
	
for(i=2;i<=n;i++)
	
{
	
	
scanf("%s",word);
	
	
k=k+strlen(word)+1;
	
	
if(k<=81) 
	
	
{
	
	
	
printf(" ");
	
	
	
printf("%s",word);
	
	
}
	
	
else
	
	
{
	
	
	
printf("\n%s",word);
	
	
   k=strlen(word)+1;
	
	
}
	
}
	
return 0;
}
