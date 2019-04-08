int main(){
	int n,i,j,k,z;
    char max;
	int sum[999]={0};
    struct student{
           int a;
           char b[26];
           int c[26];
                   }x[999];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
                     scanf("%d ",&x[i].a);
                     for(j=0;;j++){
                             scanf("%c",&x[i].b[j]);
                             if(x[i].b[j]=='\n')
                             break;
                             x[i].c[x[i].b[j]-65]++;}
                             }
    for(k=0;k<26;k++){
                      for(i=0;i<999;i++){
                                        sum[k]=sum[k]+x[i].c[k];
                                        }
                                        }
                                        
    z=sum[0];
    max=65;
    for(k=1;k<26;k++){
                      if(sum[k]>z){
                                          max=k+65;
                                          z=sum[k];
                                          }
                                          }
    printf("%c\n",max);
    printf("%d\n",z);
    for(i=0;i<n;i++){
                     if(x[i].c[max-65]>0){
                                          printf("%d\n",x[i].a);
                                          }
                                          }
                             
	scanf("%d",i);
return 0;}

