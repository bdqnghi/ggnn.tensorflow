void main()
{char a[251],b[251];
int al,bl,i,k;
scanf("%s %s",a,b);
al=strlen(a);
bl=strlen(b);
for(i=250;i>250-al;i--)
a[i]=a[i-251+al]-48;
for(i=250;i>250-bl;i--)
b[i]=b[i-251+bl]-48;
for(i=0;i<251-al;i++)
a[i]=0;
for(i=0;i<251-bl;i++)
b[i]=0;
k=al>bl?al:bl;
for(i=250;i>250-k;i--)
{
if(a[i]+b[i]>9)
{a[i]=a[i]+b[i]-10;a[i-1]+=1;}
else a[i]=a[i]+b[i];
}
k=251;
for(i=0;i<=250;i++)
if(a[i]!=0){k=i;break;}
if(k<251)
{for(i=k;i<251;i++)
printf("%d",a[i]);
printf("\n");
}
else printf("0\n");
}