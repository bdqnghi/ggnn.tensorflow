int main()
{int n,i;
char a[30],max[30],min[30];
scanf("%d\n",&n);
scanf("%s",a);
strcpy(max,a); strcpy(min,a);
for(i=2;i<=n;i++)
{scanf("%s",a);
if(strlen(a)<strlen(min)) strcpy(min,a);
if(strlen(a)>strlen(max)) strcpy(max,a);
}
puts(max); puts(min);
return 0;
}