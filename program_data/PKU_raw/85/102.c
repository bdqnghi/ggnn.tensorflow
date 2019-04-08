int main()
{
char a[20][20];
int n,i,j,b=1;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",a[i]);
for(j=0;a[i][j]!='\0';j++){b=1;
if(a[i][0]<='9'&&a[i][0]>='0'){
b=0;break;}
else if((a[i][j]<='9'&&a[i][j]>='0')||(a[i][j]<='Z'&&a[i][j]>='A')||(a[i][j]<='z'&&a[i][j]>='a')||a[i][j]=='_')
b=b;
else {b=0;break;}}
printf(b==0?"no\n":"yes\n");}
return 0;
}