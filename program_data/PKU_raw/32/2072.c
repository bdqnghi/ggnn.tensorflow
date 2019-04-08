void main()
{
 int n,i,j,k,x,la[100],lb[100];
 char a[100][100],b[100][100],c[100][100];
 scanf("%d\n",&n);  
 for(i=0;i<n;i++)
 {
  scanf("%s",a[i]);
  scanf("%s",b[i]);
  printf("\n");
 }
 for(i=0;i<n;i++)
 {
  la[i]=strlen(a[i]);
  lb[i]=strlen(b[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=la[i]-1,k=lb[i]-1;j>(la[i]-lb[i]),k>=0;j--,k--)
  {
   if(a[i][j]<b[i][k]) 
   {c[i][j]=58+a[i][j]-b[i][k];a[i][j-1]=a[i][j-1]-1;}
   else c[i][j]=a[i][j]-b[i][k]+48;
  }
  for(j=0;j<la[i]-lb[i];j++)
  c[i][j]=a[i][j];
 }
 for(x=0;x<n;x++)
 printf("%s\n",c[x]);
}