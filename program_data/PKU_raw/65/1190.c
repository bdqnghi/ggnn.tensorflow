int main(){
int n,i,a[200],b[200];
int count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d %d",&(a[i]),&(b[i]));}
for(i=0;i<n;i++)
 {
  if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0))
   {count++;}
  else if((a[i]==1&&b[i]==0)||(a[i]==2&&b[i]==1)||(a[i]==0&&b[i]==2))
   {count--;}
  else if((a[i]==1&&b[i]==1)||(a[i]==2&&b[i]==2)||(a[i]==0&&b[i]==0))
   {count=count;}
 }
if(count>0){printf("A");}
else if(count<0){printf("B");}
else if(count==0){printf("Tie");}
return 0;
}

