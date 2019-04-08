int main(){
int n;
scanf("%d",&n);
int sh[100],s[100];
int z[100];
for(int i=0;i<100;i++){
z[i]=0;
   }
for(int i=0;i<n;i++){
scanf("%d  %d",&sh[i],&s[i]);
   }
for(int u=0;u<n;u++){
for(int i=u;i<n;i++){
if(sh[i]<=140&&sh[i]>=90&&s[i]>=60&&s[i]<=90){
z[u]++;
            }
else{
break;
}
      }
     }
int t=0;
for(int i=0;i<n;i++){
if(t<z[i]){
t=z[i];
  }
 }
printf("%d",t);
return 0;
}

