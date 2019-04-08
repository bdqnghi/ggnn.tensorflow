int main()
{
	char a[2][500];
	int len[2],i,j,o,W,l;
	double n,p;
	W=0;
	l=0;
	scanf("%lf",&n);
	getchar();
	for(i=0;i<2;i++){
                     scanf("%s",a[i]);
                     len[i]=strlen(a[i]);
                     for(j=0;j<len[i];j++){
                                           if(a[i][j]!='A'&&a[i][j]!='T'&&a[i][j]!='C'&&a[i][j]!='G'){
                                                                                              W++;
                                                                                              }
                                           }
    }
    if(len[0]!=len[1]||W!=0){
                             printf("error");
                             return 0;
                             }
    else{
         for(j=0;j<len[0];j++){
                               if(a[0][j]==a[1][j]){
                                                    l++;
                                                    }
                               }
         }
    p=1.0*l/len[0];
    if(p>n){
            printf("yes");
            }else{
                  printf("no");
                  }
scanf("%d",&o);
return 0;
}
