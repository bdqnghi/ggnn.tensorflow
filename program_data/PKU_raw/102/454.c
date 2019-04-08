int main(){
int n,j,t,i,m,b,u,v,k,e;
double tall[45],man[40],woman[40],q;
char sex[8];
j=0;
t=0;
scanf("%d",&n);
for(i=0;i<n;i++){
     scanf("%s %lf",sex,&tall[i]);
     if(sex[0]=='m'){
        man[j]=tall[i];
        j++;}
        else{
        woman[t]=tall[i];
        t++;}
}
for(k=1;k<j;k++){
	for(e=0;e<j-k;e++){
		if(man[e]>man[e+1]){
        q=man[e];
		man[e]=man[e+1];
		man[e+1]=q;
		}
	}

}

for(u=1;u<t;u++){
	for(v=0;v<t-u;v++){
		if(woman[v]<woman[v+1]){
        q=woman[v];
		woman[v]=woman[v+1];
		woman[v+1]=q;
		}
	}

}
 for(m=0;m<j;m++)
 {
 printf("%.2lf ",man[m]);
 }

 for(b=0;b<t-1;b++)
 {
 printf("%.2lf ",woman[b]);
 }
 printf("%.2lf",woman[t-1]);
 return 0;
}
