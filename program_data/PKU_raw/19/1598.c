int main(){
	char a[100],b[20],c[20],d[20];
	cin.getline(a,100);
	cin.getline(b,20);
	cin.getline(c,20);
	int i=0,n=0,j=0,k,l=0;
	for(;a[i]!=0;){
		if(a[i]==32)i++;
		for(;a[i]!=32&&a[i]!=0;i++,n++)d[n]=a[i];//?a?????d
		d[n]=0;
		if(strcmp(b,d)==0){//??a????b??
			for(j=i-n;n>0;n--)
				for(k=j;a[k]!=0;k++)a[k]=a[k+1];//??a???
			for(;c[l]!=0;l++,j++){
			    for(k=j;a[k]!=0;k++);
			    for(;k>=j;k--)a[k+1]=a[k];
			    a[j]=c[l];//?c?????
		        }
			l=0;
			i=j;
		    }
		else n=0;
	    }
	cout<<a;
}