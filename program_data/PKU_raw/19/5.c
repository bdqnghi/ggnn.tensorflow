
int main(int argc, char* argv[])
{
    char s[100];
	gets(s);
	int p=strlen(s);
	char a[10],b[10];
	gets(a);gets(b);
	int q=strlen(a),l=strlen(b);
	int i,j,k=0,t;
	if(a[0]==s[0]){
		for(i=1;i<q;i++){
			if(a[i]!=s[i]){
				k=1;
				break;
			}
		}
	    if(k==0){
		   if(q>l){
		      for(i=0;i<l;i++) s[i]=b[i];
		      for(i=l;i<p-l;i++) s[i]=s[i+q-1];
		   }
		   if(q<l){
			  for(i=p+l-q;i>0;i--) s[i+l-q]=s[i];
			  for(i=0;i<l;i++) s[i]=b[i];
		   }
		}
	}
	for(i=0;i<p-1;i++){
		if(s[i]==' '){
			if(s[i+1]==a[0]){
				for(j=i+1,t=0;j<i+1+q;j++,t++){
			       if(a[t]!=s[j]){
				      k=1;
				      break;
				   }
				}
	            if(k==0){
		           if(q>l){
		              for(j=i+1,t=0;j<i+1+l;j++,t++) s[j]=b[t];
		              for(j=i+1+l;j<p-l;j++) s[j]=s[j+q-1];
				   }
		           if(q<l){
			          for(j=p+l-q;j>i+1;j--) s[j+l-q]=s[j];
			          for(j=i+1,t=0;j<i+1+l;j++,t++) s[j]=b[t];
				   }
				}
			}
		}
	}
	printf("%s\n",s);
    return 0;
}
