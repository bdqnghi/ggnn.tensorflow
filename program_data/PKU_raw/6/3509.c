int main ()
{
    int sz[100][100][100];
    int k,i,g,t,r;
    int s[100];
    int z[100];
   scanf ("%d",&k);
    for (g=0;g<=k-1;g++){
        scanf("%d %d",&s[g],&z[g]);
        for (i=0;i<=s[g]-1;i++){
            for (t=0;t<=z[g]-1;t++){
                scanf("%d",&sz[g][i][t]);
            }
        }
    }

for(g=0;g<=k-1;g++){
if(s[g]>=3&&z[g]>=3){
for (r=0,i=0;i<=s[g]-1;i++){
 r=r+sz[g][i][0]+sz[g][i][z[g]-1];   
}
    for(t=1;t<=z[g]-2;t++){
        r=r+sz[g][0][t]+sz[g][s[g]-1][t];
    }
    printf("%d\n",r);
}
  else {for(r=0,i=0;i<=s[g]-1;i++){
      for(t=0;t<=z[g]-1;t++){
          r=r+sz[g][i][t];
      }
  }
 printf ("%d\n",r); }
}

return 0;
}