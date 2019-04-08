void main()
{int m,n,s[9][9],i,j,t=-100,c,f=0,g;scanf("%d,%d",&m,&n);
for(i=0;i<m;i++)for(j=0;j<n;j++)scanf("%d",&s[i][j]);
for(i=0;i<m;i++){c=0;for(j=0;j<n;j++)if(s[i][j]>s[i][c])c=j;
g=0;for(j=0;j<m;j++)if(s[j][c]<s[i][c]){g++;break;}
if(g==0){f++;break;}
}
if(f)printf("%d+%d\n",i,c);
else printf("No\n");
}