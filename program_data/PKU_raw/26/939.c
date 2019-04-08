

int main () {

int i,a;
int j=0;
char s[100],x[100];

gets(s);

a=strlen(s);

for(i=0;i<a;i++){
                 if(s[i]!=' '){x[j]=s[i];
                            j++;
                            }
                 else if ((s[i]==' ')&&(s[i-1]!=' ')){x[j]=s[i];
                            j++;
                            }
                 }
for(i=0;i<j;i++){
printf ("%c",x[i]);
}
return 0;    
}
