int main(){
char zf[200];
char sl[200][200];
char z[200];
char a[100];
char max[100];
char min[100];
int i,l,k=0,t=0,m,n=0,len,ci=0;
gets(zf);
l=strlen(zf);
for(i=0;i<l;i++){
   if(zf[i]==' '){

	   n=0;  
       for(m=t;m<i;m++){  
           sl[k][n]=zf[m];
           n++;
	   }
       sl[k][n]='\0';
       t=i+1;     
       k++;         
   
    }        
}
n=0;
 for(m=t;m<l;m++){  
           sl[k][n]=zf[m];
           n++;
	   }
       sl[k][n]='\0';
len=k+1;


strcpy(max,sl[0]);
strcpy(min,sl[0]);

 
    for(k=0;k<len;k++){
        if(strlen(sl[k])>strlen(max)){
           strcpy(max,sl[k]);
		}
		if(strlen(sl[k])<strlen(min)){
           strcpy(min,sl[k]);
		}
}
printf("%s\n",max);
printf("%s\n",min);





return 0;
}
