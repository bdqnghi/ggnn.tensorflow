void main()
{char s[502],z[502][5]={'\0'};int b[502]={0},i,j,k,l,n,p,f,m=1,S=1;scanf("%d\n",&n);gets(s);l=strlen(s);

for(i=0;i<=l-n;i++){if(b[i])continue;
	p=0;for(j=0;j<=l-n;j++){if(b[j])continue;
		f=1;for(k=0;k<n;k++)if(s[i+k]!=s[j+k]){f=0;break;} if(f){p++;b[j]=1;}}
if(p>m){m=p;for(k=0;k<n;k++){z[1][k]=s[i+k];}z[1][n]='\0';S=2;}
else if(p==m)
{for(k=0;k<n;k++){z[S][k]=s[i+k];}z[S][n]='\0';S++;}}
if(m==1)printf("NO\n");
else{
printf("%d\n",m);
for(i=1;i<S;i++)printf("%s\n",z[i]);
}}