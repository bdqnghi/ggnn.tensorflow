void main(){
	int i,j,l,t,m,count[50],lie[20];
	char p;
	for(i=0;i<50;i++){
for(j=0;j<20;j++){
scanf("%d",&lie[j]);
if(lie[0]==-1) goto lalala;
scanf("%c",&p);
if (p=='\n') break;
}
count[i]=0;
for(l=0;l<j;l++)
for(t=0;t<j;t++)
if((lie[l]-2*lie[t])==0)
count[i]=count[i]+1;
}
lalala:for(m=0;m<i;m++){
printf("%d",count[m]);
if(m!=i-1)
printf("\n");
}
}