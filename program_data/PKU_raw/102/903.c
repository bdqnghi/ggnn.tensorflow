int main(){
int n,c,m=0,i,a=0,b=0,j;
char s[41][10];
double h[41],hm[41],hf[40],dqm,dqf;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%s %lf",s[i],&h[i]);}
for(i=0;i<n;i++){if(strcmp(s[i],"male")==0){hm[a]=h[i];a++;}
                 else {hf[b]=h[i];b++;}
}
for(i=0;i<a-1;i++)
{for(j=0;j<a-1;j++){if(hm[j]>hm[j+1]){dqm=hm[j];
                                     hm[j]=hm[j+1]; 
                                      hm[j+1]=dqm;}}}
for(i=0;i<b-1;i++)
{for(j=0;j<b-1;j++){if(hf[j]<hf[j+1]){dqf=hf[j];
                                     hf[j]=hf[j+1]; 
                                      hf[j+1]=dqf;}}}
for(i=0;i<a;i++){printf("%.2lf ",hm[i]);}
for(i=0;i<b;i++){if(i<b-1)printf("%.2lf ",hf[i]);
                 else printf("%.2lf",hf[i]);}

return 0;
}
