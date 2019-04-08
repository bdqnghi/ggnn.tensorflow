int main()
{
char str[20][11], substr[20][4];
int i=0,j,n,l,k,h,x,y;
char a='\0';
while (scanf("%s %s",str[i],substr[i])!=EOF)
{scanf("\n");
i++;}
n=i;
for(i=0;i<n;i++)
{
l=strlen(str[i]);
for(j=0;j<l;j++)
if(str[i][j]>a) a=str[i][j];
k=0;
while(str[i][k]!=a) printf("%c",str[i][k++]);
y=k;
printf("%c",a);
for(h=0;h<3;h++)
printf("%c",substr[i][h]);
for(x=y+1;x<l;x++)
printf("%c",str[i][x]);
printf("\n");
a='\0';

}
return 0;
}




