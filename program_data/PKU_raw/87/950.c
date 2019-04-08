int main () {
int i,s,a,b,c,d,e,f,sz[100];
for ( i=0;;i++) {
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
if (a==0&b==0&c==0&d==0&e==0&f==0) {
	break;
}
sz[i]=(d+12-a)*3600+(e-b)*60+f-c;
}
for (int j=0;j<i;j++) {
	printf("%d\n",sz[j]);
} 
return 0;
}