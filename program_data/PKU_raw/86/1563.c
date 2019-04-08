int a[1000][1000],b[1000][1000],c[1000];
int x=0,y=0,z=0,i=0,m=0,e=0,r=0,t=0;
int main()
{
scanf("%d",&e);

for(i=0;i<e;i++){
    scanf("%d",&x);
    for(m=0;m<x;m++){
         scanf("%d",&a[i][m]);
    }
}
for(i=0;i<e;i++){
    for(m=1;m<=60;m++){b[i][m]=1;}
    t=0;
    for(m=0;m<60;m++){
    if(a[i][m]==0)break;
    a[i][m]+=3*t;
    b[i][a[i][m]+3]=0;
    b[i][a[i][m]+1]=0;
    b[i][a[i][m]+2]=0;
    //printf("%d\n",a[i][m]);
    t++;
    }
}
t=0;
for(i=0;i<e;i++){
t=0;
for(m=1;m<=60;m++){
if(b[i][m]==1){t++;
c[i]=t;}

}
}
for(i=0;i<e;i++){
printf("%d\n",c[i]);
}
return 0;
}