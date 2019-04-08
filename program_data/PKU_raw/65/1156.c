int main(){
struct{
int a,b;
}sz[100];
int n,i,x=0,y=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&sz[i].a,&sz[i].b);
}
for(i=0;i<n;i++){
if(sz[i].a-sz[i].b==-1||sz[i].a-sz[i].b==2){x++;}
else if(sz[i].a-sz[i].b==1||sz[i].a-sz[i].b==-2){y++;}
else{continue;}
}
if(x>y){printf("A");}
else if(x==y){printf("Tie");}
else{printf("B");}
return 0;
}

