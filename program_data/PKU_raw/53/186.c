void main()
{int c[300],n,i,j,k;
scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%d",&c[i]);
printf("%d",c[0]);
for(i=1;i<n;i++)
  {k=0;
for(j=0;j<i;j++)
if(c[i]!=c[j]) k++;
if(k==i)
printf(",%d",c[i]);
   }
}

