main(){
char a[100],b[100];
int i,j,k;
for(i=0;i<100;i++)
{
a[i]='\0';
b[i]='\0';
}
int C[26],c[26],D[26],d[26];
for(i=0;i<26;i++){
c[i]=0;
C[i]=0;
d[i]=0;
D[i]=0;
}
scanf("%s %s",a,b);
for(i=0;i<100;i++){
if(a[i]>='A'&&a[i]<='Z')
C[a[i]-'A']++;
if(a[i]>='a'&&a[i]<='z')
c[a[i]-'a']++;
if(b[i]>='A'&&b[i]<='Z')
D[b[i]-'A']++;
if(b[i]>='a'&&b[i]<='z')
d[b[i]-'a']++;
}
for(i=0;i<26;i++){
if(c[i]!=d[i]||C[i]!=D[i]){
printf("NO");
break;
}
}
if(i==26)
printf("YES");
}