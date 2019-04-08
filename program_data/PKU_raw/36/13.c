void change(char a[])
{int i,j,t,x;
for(i=0;a[i]!='\0';i++)
{t=a[i];x=i;
for(j=i;a[j]!='\0';j++) {if(a[j]>=t) {t=a[j];x=j;}}
a[x]=a[i];
a[i]=t;
}
}
void main()
{char a[100];
char b[100];
int i;
for(i=0;i<0;i++) {a[i]='\0';b[i]='\0';}
scanf("%s %s",a,b);
change(a);
change(b);
for(i=0;a[i]!='\0';i++) {if(a[i]!=b[i]) {printf("NO");break;}}
if(a[i]=='\0') printf("YES");
}
