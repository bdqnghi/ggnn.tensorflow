void main()
{
int n,j,k,l,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
char x[100],y[100];
scanf("%s",x);j=strlen(x);
scanf("%s",y);k=strlen(y);
for(l=k-1;l>=0;l--){x[j-k+l]=x[j-k+l]-y[l]+48;if(x[j-k+l]<48){x[j-k+l]+=10;x[j-k+l-1]--;}}
printf("%s",x);printf("\n");
}
}