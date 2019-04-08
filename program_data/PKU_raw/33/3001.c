  int main(){
	  int n,i,k;
	  char a[256];
	  scanf("%d",&n);
	  for(i=0;i<n;i++){
	   scanf("%s",a);                                                                                       		  for(k=0;a[k]!='\0';k++){
			  if(a[k]=='A')
			  {
				  printf("T");
				  continue;
			  }
             if(a[k]=='G')
			 {
				  printf("C");
				  continue;
			  }
             if(a[k]=='C')
			 {
				  printf("G");
				  continue;
			  }

             if(a[k]=='T')
			 {
				  printf("A");
				  continue;
			  }
		  }
		  printf("\n");
	  }
	  return 0;
  }



	  