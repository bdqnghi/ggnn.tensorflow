void main()
{int i,j,k,l,n,r,s;char a[100][14]={'\0'},b[100][10]={'\0'},c[100][3]={'\0'},m;
for(i=0,n=0;i<100;i++,n++)
gets(a[i]);
for(i=0;i<n;i++)
{l=strlen(a[i]);
 m=a[i][0];
 for(j=0;j<l-4;j++)
  if(a[i][j]>m) {m=a[i][j];k=j;}
 for(j=k+1,r=0;j<l-4;j++,r++)
  {b[i][r]=a[i][j];a[i][j]='\0';}
 a[i][l-4]='\0';
 for(j=l-3,s=0;j<l;j++,s++)
  {c[i][s]=a[i][j];a[i][j]='\0';}
 printf("%s\n",strcat(strcat(a[i],c[i]),b[i]));}
}