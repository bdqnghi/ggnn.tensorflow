struct P
{
char id[10];
int age;
}
pa[100];
struct P pb[100];
int main(){
	int n,r=0,s=0,i,o,p,j,k;
	scanf("%d",&n);
	struct P temp;
	for(i=0;i<n;i++){
              scanf("%s%d",temp.id,&(temp.age));
			  if(temp.age>=60){
				  pb[r]=temp;
				  r++;
			  }else{
				  pa[s]=temp;
				  s++;
			  }
	}
			  for(o=0;o<r;o++){
				  for(p=0;p<r-o;p++){
					  if(pb[p].age<pb[p+1].age){
						  struct P tmp=pb[p];
						  pb[p]=pb[p+1];
						  pb[p+1]=tmp;
					  }
				  }
			  }
			  for(j=0;j<r;j++){
				  printf("%s\n",pb[j].id);
			  }
			  for(k=0;k<s;k++){
				  printf("%s\n",pa[k].id);
			  }
	return 0;
}