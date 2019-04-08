struct BING
{
       char id[10];
       int old;
}bing[100],temp;
int main()
{
    int i,j,k,n,p,max;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%s%d",bing[i].id,&bing[i].old);
                     }
    for(p=0;;p++){max=-1;
                  for(i=0;i<n;i++){
                                   if(bing[i].old>max&&bing[i].old>=60){max=bing[i].old;k=i;}
                                        }
    if(max>=60) {printf("%s\n",bing[k].id);bing[k].old=-1;}
    if(max<60) break;}
    for(i=0;i<n;i++){
                    if(bing[i].old<60&&bing[i].old>=0) printf("%s\n",bing[i].id) ;
                     } 
    return 0;
}
