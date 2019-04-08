int main()
{int m,n,b,i,j,k,l,x,y,t,r,a[100]={0};
 scanf("%d%d",&m,&n);
 i=0;for(k=m;k<=n;){if(k==2){printf("2");k++;i++;}else if(k%2==0){k++;}else {l=log10(k);for(j=2;j<=sqrt(k);j++){x=k%j;if(x==0)break;}
 if(j<=sqrt(k)) {k=k+2;continue;}else{t=k;for(j=0;j<=l;j++){r=t/(pow(10,l-j));a[j]=r;t=t-r*pow(10,l-j);}
 for(j=0;j<=l/2;j++){if(a[j]!=a[l-j])break;}if(j<=l/2)k=k+2;else {if(i==0)printf("%d",k);else printf(",%d",k);i++;k=k+2;}}}}
 if(i==0)printf("no");printf("\n");return 0;}