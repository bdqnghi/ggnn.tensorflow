void main()
{int i,j=0,n;
 char x[100][100];
 for (i=0;i<100;i++)
 {scanf("%s",x[i]);
  if (strlen(x[i])==0)
	  break;
 }
 n=i-2;
 for (i=0;i<n;i++)
 {    if(j)
     printf(" ");
     if (strcmp(x[i],x[n])==0)
    printf("%s",x[n+1]);
else
  printf("%s",x[i]);
 j++; }
 }



