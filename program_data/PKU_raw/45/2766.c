int main()
{char a[52],b[55],c[52];
scanf("%s %s",a,b);
int i,j,k,l;
i=strlen(a);j=strlen(b)-i;
for(k=0;k<=j;k++)
{for(l=k;l<=k+i-1;l++)
c[l-k]=b[l];
c[l-k]='\0';
if(strcmp(a,c)==0)
break;
}
printf("%d",k);
return 0;
}