void main()
{
	int n,i,l[2],k;
  char a[100][100],b[100][100];
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
	  scanf("%s %s",a[i],b[i]);
	  if (i-n+1) printf("\n");
  }
  for (i=0;i<n;i++)
  {
	  l[0]=strlen(a[i]);
	  l[1]=strlen(b[i]);
	  for (k=1;k<l[1]+1;k++)
	  {
		  a[i][l[0]-k]=48+(int)a[i][l[0]-k]-(int)b[i][l[1]-k];
		  if(a[i][l[0]-k]<48){a[i][l[0]-k]+=10;a[i][l[0]-k-1]=(int)a[i][l[0]-k-1]-1;}
	  }
	  for(k=0;k<strlen(a[i]);k++) if(a[i][0]!=48) printf("%c",a[i][k]);else {printf("%c",a[i][k+1]);if (k==strlen(a[i])-2) break;}
	  printf("\n");
  }
}
