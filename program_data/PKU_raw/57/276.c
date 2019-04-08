void main()
{
int n,i,k,j;
scanf("%d",&n);
for(j=0;j<=n;j++)
{
char x[50];
gets(x);
k=strlen(x);
if(x[k-3]=='i'&&x[k-2]=='n'&&x[k-1]=='g'){for(i=0;i<k-3;i++)printf("%c",x[i]);}
else if(x[k-2]=='e'&&x[k-1]=='r'){for(i=0;i<k-2;i++)printf("%c",x[i]);}
else for(i=0;i<k-2;i++)printf("%c",x[i]);
printf("\n");
}
}
