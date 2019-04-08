void main()
{int i,j,n,k=0;
scanf("%d\n",&n);
int s[300];
for(i=0;i<n;i++) scanf("%d",&s[i]);
printf("%d",s[0]);
for(i=1;i<n;i++)
{for(j=0,k=0;j<i;j++) {if(s[j]==s[i]) k++;
}if(k==0) printf(",%d",s[i]);}
}
