int main(){
int n,a,b,i,s=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d ",&a,&b);
if(a==0&&b==1){s=s+1;}
else if(a==1&&b==2){s=s+1;}
else if(a==2&&b==0){s=s+1;}
else if(a==1&&b==0){s=s-1;}
else if(a==2&&b==1){s=s-1;} 
else if(a==0&&b==2){s=s-1;}  
}
if(s>0){printf("A");}
else if(s<0){printf("B");}
else{printf("Tie");}
return 0;
}