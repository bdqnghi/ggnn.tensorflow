main()
{
char a[1001],t[1001];
scanf("%s",a);
int b[1001],i,j,k,h,p=0;
b[0]=1;
k=strlen(a);
for(h=0;h<=k-1;h++)
{
    if(a[h]>='a'&&a[h]<='z') a[h]=a[h]+('A'-'a');
}
if (k==1) printf("(%c,1)",a[0]);
else
{
for(i=0;i<=k-2;i++)
{
 t[p]=a[i]  ;
 if(a[i]==a[i+1])  
 {
     b[p]++;
 }
 else 
 {
     p++;
     t[p]=a[i+1];
     b[p]=1;
 }
}
for(j=0;j<=p;j++) printf("(%c,%d)",t[j],b[j]);
}
}
