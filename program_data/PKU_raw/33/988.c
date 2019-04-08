int main()
{int n,i=1,j=1,l=1,g=1;
char a;
char x[300],y[300];
x[0]='q';y[0]='o';
scanf("%d",&n);
getchar();
for(i=1;i<=n;i++)
{for(j=1;j<=300;j++)
{scanf("%c",&a);
x[j]=a;
if(a=='\n')break;}
for(g=1;g<=300;g++)
{switch(x[g])
{
	case'A':y[g]='T';break;
	case'T':y[g]='A';break;
	case'C':y[g]='G';break;
	case'G':y[g]='C';break;
}
}
for(l=1;l<=j-1;l++)
{printf("%c",y[l]);}
printf("\n");}

return 0;}