 int main()
 {int m,n,i,j,tt,*l,k;
 int s[102];
 scanf("%d  %d",&m,&n);
 for(i=0;i<=m-1;i++)
 scanf("%d",&s[i]);
 int *p=&s[0];
 for(i=1;i<=n;i++)
 {tt=*(p+m-1);
	for(k=m-1;k>=1;k--)
	   {l=p+k;
	   *l=*(l-1);
		}
	*p=tt;
		}
printf("%d",*p);
for(j=1;j<=m-1;j++)
printf(" %d",*(p+j));
return 0;
 }
 