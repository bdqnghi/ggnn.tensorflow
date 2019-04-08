int main(){
	char a[10000],b[200][50],x[50];
	int c[200],k,m=0,n,i,max,min,want1,want2;
	gets(a);
	for(k=0;k<200;k++)
	{
    	for(i=0;a[m]!=' '&&a[m]!=','&&a[m]!='\0';i++,m++)
		{
		    x[i]=a[m];
		}
	    x[i]='\0';
        strcpy(b[k],x);
         if(a[m]=='\0')
		{
			break;
		}
		 if(a[m]==','){
			 m=m+2;
		 }else{
	    m=m+1;
		 }
    }
	n=k+1;
    for(i=0;i<n;i++){
		c[i]=strlen(b[i]);
	}
	max=c[0];
	want1=0;
	for(i=1;i<n;i++){
		if(c[i]>max){
			max=c[i];
			want1=i;
		}
	}		                                    
   min=c[0];
   want2=0;
	for(i=1;i<n;i++){
		if(c[i]<min){
			min=c[i];
			want2=i;
		}
	}
	printf("%s\n",b[want1]);
	printf("%s",b[want2]);
	return 0;
}
