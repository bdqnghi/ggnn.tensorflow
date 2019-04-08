void sort(char aa[],int n)
{

int i,j,k;char t,q;
for(i=0;i<n-1;i++)
{k=i;
for(j=i+1;j<n;j++)
if(aa[j]<aa[k]) k=j;
t=aa[k];
q=aa[i];
aa[k]=q;
aa[i]=t;}


}

void main()
{
char a[100],b[100];
scanf("%s %s",a,b);
int m,n;
m=strlen(a);n=strlen(b);
if(m!=n) printf("NO");
else{sort(a,m);
sort(b,n);

int i;
for(i=0;i<m;i++) 
{if(a[i]!=b[i]) {printf("NO");break;}
else if(i==m-1) printf("YES");
}
}

}
