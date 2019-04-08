int main(){
        int n,i,j,k;
        scanf("%d",&n);

        char id[100][10];
        int old[100];

        for(i=0;i<n;i++){
                scanf("%s",id[i]);
                scanf("%d",&old[i]);
        }
         
        int e;
        char s[100][10];
        for( j=1;j<n;j++){
   for( k=0;k<n-j;k++){
    if(old[k]<old[k+1]&&old[k+1]>=60){
     e=old[k+1];
     old[k+1]=old[k];
     old[k]=e;
         strcpy(s[k],id[k+1]);
        strcpy(id[k+1],id[k]);
	strcpy(id[k],s[k]);
		}
	}
	}
        for(i=0;i<n;i++){
                printf("%s\n",id[i]);
        }


        return 0;
}
