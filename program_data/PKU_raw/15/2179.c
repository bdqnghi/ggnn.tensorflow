int main()
{
int x,y,z,w;
int n,i,j,t,s,tz=0;
scanf("%d",&n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
     {scanf("%d",&t);
             if(t==0&&tz==0) {tz++;x=i;y=j;}
         if (t==0){z=i;w=j;}
     }  
                           printf("%d",(z-x-1)*(w-y-1));                       
}