int main(){
	int n,i,k;
	char s[50][50],e_s[10];
	double h[50],e_h;
	scanf("%d",&n);
	for(i=0;i<n;i++){
                     scanf("%s %lf",s[i],&h[i]);
                     }
    for(k=1;k<=n;k++){
                      for(i=0;i<n-k;i++){
                                         if((s[i][0]=='f'&&s[i+1][0]=='m')||(s[i][0]=='m'&&s[i+1][0]=='m'&&h[i]>h[i+1])||(s[i][0]=='f'&&s[i+1][0]=='f'&&h[i]<h[i+1])){
                                                      strcpy(e_s,s[i]);
                                                      strcpy(s[i],s[i+1]);
                                                      strcpy(s[i+1],e_s);
                                                      e_h=h[i];
                                                      h[i]=h[i+1];
                                                      h[i+1]=e_h;
                                                         }
                                         }
                      }
   
    printf("%.2lf",h[0]);
    for(i=1;i<n;i++){printf(" %.2lf",h[i]);}
       return 0;
	}
