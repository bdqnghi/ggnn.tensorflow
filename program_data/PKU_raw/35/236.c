main()
{int i,j,a[8][8],m,n,max,c,b,k;
scanf("%d,%d",&m,&n);
 for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);
for(i=0;i<m;i++)
{max=a[i][0];
c=0;
for(j=0;j<n;j++)
{if(max<a[i][j]) {max=a[i][j];c=j;}  }
for(k=0;k<m;k++)
{if(max>a[k][c]) break; else if(k==m-1) {printf("%d+%d",i,c);goto end;}}
}printf("No");
end:scanf("%d",a);     
}
