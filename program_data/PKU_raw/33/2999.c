int main()
{
int n,i,j;
char c;
scanf("%d",&n);
c=getchar();
for(i=0;i<n;i++)
{
for(j=0;;j++)
{
c=getchar();
if(c=='A'){printf("T");continue;}
if(c=='C'){printf("G");continue;}
if(c=='T'){printf("A");continue;}
if(c=='G'){printf("C");continue;}
if(c=='\n'){printf("\n");break;}


}
}
}