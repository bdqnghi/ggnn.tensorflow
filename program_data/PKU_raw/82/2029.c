int main(){
    int n,p,i,m,l[100];
    m=0;
    p=0;
    scanf("%d",&n);
    int z[100],q[100];
    for(i=0;i<n;i++){
    scanf("%d %d",&z[i],&q[i]);
    }
    for(i=0;i<100;i++) l[i]=0;
        for(i=0;i<n;i++)
        {
            if(z[i]>=90&&z[i]<=140&&q[i]>=60&&q[i]<=90) {l[m]++;}
            else
            {
              m++;            
            }
        }
    for(i=0;i<=m;i++)
    {
        if(l[i]>p){
           p=l[i]; 
        }
    }
printf("%d",p);
return 0;
}