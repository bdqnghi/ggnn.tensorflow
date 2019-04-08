int main()
{
int a,b,i,n;
int c=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a,&b);
if(a==0&&b==1||a==1&&b==2||a==2&&b==0){c=c+1;}
else if(a==0&&b==2||a==1&&b==0||a==2&&b==1){c=c-1;}
}
if(c==0){printf("Tie");}
else if(c>0){printf("A");}
else if(c<0){printf("B");}
return 0;
}

