
int main()
{
  char str[300*100];
  int i,j,t[100],c[100],w,f,g,h,k;
  w=0;
  gets(str);
  for(i=0;str[i]!=0&&str[i]!=' ';i++){
	 for(j=i+1;str[j]!=0&&str[j]!=' ';j++);
	                                t[w]=i;
	                                c[w]=j-i;
	                                i=j;
									w++;//????w???????????????????i<w,??i<=w????? 
									}
									f=c[0];
									g=0;
									for(i=0;i<w;i++){
						   if(c[i]>f){
						   			  f=c[i];
						   			  g=i;
									  }
									  }
									  h=c[0];
									  k=0;
							  for(i=0;i<w;i++){
		  					if(c[i]<h){
						   h=c[i];
						   k=i;
						   }
						   }
					for(i=t[g];i<t[g]+c[g]-1;i++){
													printf("%c",str[i]);
													}
													printf("%c\n",str[t[g]+c[g]-1]);
					for(i=t[k];str[i]!=0&&str[i]!=' ';i++){
													printf("%c",str[i]);
													} 						
  
  return 0;
}
