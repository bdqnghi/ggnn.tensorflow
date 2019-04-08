void main()
{
char a[50],b[50];
int i,j,k;
scanf("%s",a);scanf("%s",b);
for(i=0;b[i]!='\0';i++)
{k=i;
for(j=0;a[j]!='\0'&&a[j]==b[k];j++,k++)
;
if(a[j]=='\0')break;}
printf("%d",i);
}