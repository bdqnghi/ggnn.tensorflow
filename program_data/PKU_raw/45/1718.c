int main()
{  char a[50],b[50];
    int i,k,j,len;
   scanf("%s%s",a,b);
   len=strlen(a);
   for(k=0;k<50;k++){
	   if(b[k]==a[0]){
		   for(j=k+1;j<=k+1+len;j++){
			   for(i=0;i<len;i++){
				   
				   if(b[j]==a[i])
				   {
			   printf("%d\n",k);
			   break;
			   }
			   }break;
		   }break;
	   }
   
   }

	return 0;}
