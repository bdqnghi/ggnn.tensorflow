
int main(){
int n,i,k,b[51];
char a[100];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",a);
b[i]=strlen(a);
for(k=0;k<b[i];k++){
if(a[k]=='e'&&a[k+1]=='r'&&a[k+2]=='\0'){a[k]='\0';break;}
else if(a[k]=='l'&&a[k+1]=='y'&&a[k+2]=='\0'){a[k]='\0';break;}
else if(a[k]=='i'&&a[k+1]=='n'&&a[k+2]=='g'&&a[k+3]=='\0'){a[k]='\0';break;}
}
printf("%s\n",a);
}



return 0;
}
