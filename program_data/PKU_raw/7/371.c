
int main()
{  char str[300*100],sub[100],rep[100];
    gets(str);
    gets(sub);
	gets(rep);
   int i,j,k,t,w;
   t=0;
   w=0;
   for(i=0;str[i]!=0;i++){
   			if(str[i]==sub[0]){
							  for(k=i+1,j=1;str[k]!=0&&sub[j]!=0;k++,j++){
							  				if(str[k]!=sub[j])
							  				break;
											}
											if(sub[j]==0){
									  t=i;
									  w=k;
									  break;
									  }
									  }
									  }
									  if(w>t){
									  		  if(strlen(sub)>=strlen(rep)){
											  							   for(i=t,j=0;rep[j]!=0;i++,j++){
										   								  str[i]=rep[j];}
										   								  for(k=w;str[k]!=0;i++,k++){
													  							 str[i]=str[k];
																				 }
										                         str[i]=0;  }
																 else{
											 	  i=strlen(str)+strlen(rep)-strlen(sub);
											 	  for(k=strlen(str);k>=w;k--,i--){
																	 str[i]=str[k];
																	 }
												for(i=t,j=0;rep[j]!=0;i++,j++){
														str[i]=rep[j];
														}
														}
														}
														printf(str);        
  
  return 0;
}
