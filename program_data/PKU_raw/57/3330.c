int main(){
    int n,k,i,j,len;
    char ci[50][50];
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%s",ci[i]);
            }
    char *ps;
    //int m;
    for( j=0;j<n;j++){
            //m=strlen(ci[j]);
            ps=ci[j]-1+strlen(ci[j]);
            k=strcmp(ps,"g");
            if(k!=0){
				/*
                    for(int k=0;k<m-3;k++){
                            printf("%c",ci[j][k]);
                            printf("\n");
                            }
							*/
			        len=strlen(ci[j]);
					ci[j][len-2]='\0';
            }
            else if(k==0){
				/*
                 for(int h=0;h<m-4;h++){
                         printf("%c",ci[j][h]);
                         printf("\n");
                 }
				 */
					len=strlen(ci[j]);
				ci[j][len-3]='\0';
            }
    }

	for( i=0;i<n;i++){
            printf("%s\n",ci[i]);
            }
    return 0;
}