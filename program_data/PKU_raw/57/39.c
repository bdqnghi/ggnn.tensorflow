void main()
{int n,i,j,k,a[100];
char c[100][100];
char e;
scanf("%d",&n);
for (i=0;i<n;i++)
   scanf("%s",c[i]);
for (i=0;i<n;i++)
  a[i]=strlen(c[i]);

for(i=0;i<n;i++)
{  k=a[i];

 if ((e=c[i][k-3])=='i')
 { for (j=0;j<k-3;j++)
		 printf("%c",c[i][j]);
	 printf("\n");
 }	 

else 
{ for (j=0;j<k-2;j++)
	   printf("%c",c[i][j]);
   printf("\n");
}

}


}