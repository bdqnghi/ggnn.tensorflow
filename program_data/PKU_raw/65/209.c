int main(){
int n,a[100],b[100],i,x=0,y=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
if(a[i]==0&&b[i]==1){x=x+1;}
else if(a[i]==0&&b[i]==2){y=y+1;}
else if(a[i]==0&&b[i]==0){y=y+1;x=x+1;}
else if(a[i]==1&&b[i]==0){y=y+1;}
else if(a[i]==1&&b[i]==2){x=x+1;}
else if(a[i]==1&&b[i]==1){y=y+1;x=x+1;}
else if(a[i]==2&&b[i]==0){x=x+1;}
else if(a[i]==2&&b[i]==1){y=y+1;}
else if(a[i]==2&&b[i]==2){y=y+1;x=x+1;}
}
if(x>y){printf("A");}
else if(x<y){printf("B");}
else if(x==y){printf("Tie");}
return 0;
}