int main()
{char a[300][20];
int n,i;
scanf("%s",a[0]);
n=strlen(a[0]);
printf("%d",n);
for(i=1;i<300;i++){
scanf("%s",a[i]);
n=strlen(a[i]);
if(n==0)break;
else
printf(",%d",n);}



	return 0;
}

