int main()
{
    int n,i,j;
    double a[40],b[40],c[40],q;
    char xb[40][10];
    char str1[]="male",str2[]="female";
    scanf("%d",&n);
    int t=0,k=0;
    for(i=0;i<n;i++){
                     scanf("%s%lf",xb[i],&c[i]);
                     if(strcmp(xb[i],str1)==0){
                                       a[k]=c[i];
                                       k++;
                                       }
                     if(strcmp(xb[i],str2)==0){
                                         b[t]=c[i];
                                         t++;
                                         }
                                         }
    for(i=1;i<k;i++){
                     for(j=0;j<k-i;j++){
                                        if(a[j]>a[j+1]){
                                                        q=a[j];
                                                        a[j]=a[j+1];
                                                        a[j+1]=q;
                                                        }
                                        }
                                        }
     for(i=1;i<t;i++){
                     for(j=0;j<t-i;j++){
                                        if(b[j]<b[j+1]){
                                                        q=b[j];
                                                        b[j]=b[j+1];
                                                        b[j+1]=q;
                                                        }
                                        }
                                        }
     for(i=0;i<k;i++)
     printf("%.2lf ",a[i]);
     for(i=0;i<t-1;i++)
     printf("%.2lf ",b[i]);
     printf("%.2lf",b[t-1]);
     return 0;
     }
     
                                        
    
