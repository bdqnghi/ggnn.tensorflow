int main(){
 int i,n,j,k,f;
 int sz[100];
 int sz2[100][100];

 for(i=0;i<100;i++)
 {
	 for(j=0;j<100;j++)
	 {
	 sz2[i][j]=1;
	 }
 }
	 scanf("%d",&n);
 for(k=0;k<n;k++)
 {	int t=0;
	 scanf("%d",&f);
	 for(i=0;i<f;i++)
	 scanf("%d",&sz[i]);
   for(j=0;j<f;j++)
   {
		   sz2[k][sz[j]+t*3]=0;
	       sz2[k][sz[j]+1+t*3]=0;
          sz2[k][sz[j]+2+t*3]=0;
		  t++;
   }  
}
 
for(k=0;k<n;k++)
{  int p=60;
 for(i=0;i<60;i++)
{
if(sz2[k][i]==0)
{
	p--;
}
}
printf("%d\n",p);
}
return 0;
}