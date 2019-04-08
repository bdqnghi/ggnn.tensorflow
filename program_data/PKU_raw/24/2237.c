void main()
{
char a[6600],c,a1[300][210],d[401];
int i=0,j,n,k=0,x,y,z,b[300]={0};
c=getchar();
while(c!='\n')
{
	
	if(c==' '||c==',')
    {a1[i][k]='\0';k=0;i++;}
	else {b[i]++;a1[i][k]=c;k++;}
    c=getchar();




}
a1[i][k]='\0';

n=i;k=0;

if(b[0]==b[1]&&b[1]==b[2]&&b[2]==b[3])printf("%s\n%s\n",a1,a1);
else{
for(j=0;j<n;j++)
if(b[j]>=b[j+1]){z=b[j];b[j]=b[j+1];b[j+1]=z;strcpy(d,a1[j]);strcpy(a1[j],a1[j+1]);strcpy(a1[j+1],d);}
printf("%s\n",a1[n]);
for(j=0;j<n;j++)
if(b[j]<=b[j+1]&&b[j]>0||b[j+1]==0){z=b[j];b[j]=b[j+1];b[j+1]=z;strcpy(d,a1[j]);strcpy(a1[j],a1[j+1]);strcpy(a1[j+1],d);}
printf("%s\n",a1[n]);
}

}