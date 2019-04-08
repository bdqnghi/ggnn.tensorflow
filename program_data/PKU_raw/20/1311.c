void main()
{void f(char yl[],char cr[]);
char a[11],b[4];int i;
for(i=1;;){if(scanf("%s%s",a,b)==EOF)break;
else f(a,b);

}
}
void f(char yl[],char cr[])
{int i,j,l,p=0;char s[14];l=strlen(yl);
for(i=0;i<=l-1;i++){p=0;for(j=0;j<=l-1;j++)if(yl[j]>yl[i]) p++;if(p==0){p=i;break;}}
for(i=0;i<=p;i++) s[i]=yl[i];for(i=p+1;i<=p+3;i++) s[i]=cr[i-1-p];for(i=p+4;i<=l+2;i++) s[i]=yl[i-3];s[l+3]='\0';
printf("%s\n",s);}
