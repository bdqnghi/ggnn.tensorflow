void main()
{char s[10000];int i,j,m=0,n=0,l;
gets(s);l=strlen(s);
for(i=0;i<=l-1;i++)
{if(((s[i]>='a')&&(s[i]<='z'))||((s[i]>='A')&&(s[i]<='Z'))){
	for(j=i;j<=l-1;j++){if(((s[j]>='a')&&(s[j]<='z'))||((s[j]>='A')&&(s[j]<='Z'))){if(j!=l-1)continue;
	else{if((j-i+1)>(m-n)){m=j+1;n=i;}i=j;break;}}
    else {if((j-i)>(m-n)){m=j;n=i;}i=j-1;break;}}}}
for(i=n;i<=m-1;i++)printf("%c",s[i]);printf("\n");
m=100;n=0;
for(i=0;i<=l-1;i++)
{if(((s[i]>='a')&&(s[i]<='z'))||((s[i]>='A')&&(s[i]<='Z'))){
	for(j=i;j<=l-1;j++){if(((s[j]>='a')&&(s[j]<='z'))||((s[j]>='A')&&(s[j]<='Z'))){if(j!=l-1)continue;
	else{if((j-i+1)<(m-n)){m=j+1;n=i;}i=j;break;}}
    else {if((j-i)<(m-n)){m=j;n=i;}i=j-1;break;}}}}
for(i=n;i<=m-1;i++)printf("%c",s[i]);printf("\n");

}
