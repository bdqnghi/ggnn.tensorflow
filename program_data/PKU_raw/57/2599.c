int main(){
int m,i,j,p;
scanf("%d",&m);
char sz[50][20]={'\0'};
int len[50];
for(i=0;i<m;i++){
scanf("%s",sz[i]);
len[i]=strlen(sz[i]);
}
for(i=0;i<m;i++){
p=len[i]-2;
if((sz[i][p]=='e')&&(sz[i][p+1]=='r')){
sz[i][p]='\0';
sz[i][p+1]='\0';
continue;
}
else if((sz[i][p]=='l')&&(sz[i][p+1]=='y')){
sz[i][p]='\0';
sz[i][p+1]='\0';
continue;
}
else if((sz[i][p-1]=='i')&&(sz[i][p]=='n')&&(sz[i][p+1]=='g')){
sz[i][p-1]='\0';
sz[i][p]='\0';
sz[i][p+1]='\0';
}
}
for(i=0;i<m;i++){
puts(sz[i]);
}
return 0;
}
