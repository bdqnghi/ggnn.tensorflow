int i,j,k,a[3],b[3],c[3],d[3],p,q;
int main(){
	for(i=0;i!=2;i++)
		for(j=0;j!=2;j++)
			if(i!=j)
			for(k=0;k!=2;k++){
				a[0]=i;a[1]=j;a[2]=k;
				b[0]=(j>i)+(i==k);b[1]=(i>j)+(i>k);b[2]=(k>j)+(j>i);
				c[0]=0;c[1]=1;c[2]=2;
				d[0]=0;d[1]=1;d[2]=2;
				for(p=0;p!=2;p++)
					for(q=p+1;q!=3;q++){
						if(a[c[p]]>a[c[q]]){
							c[p]=c[p]^c[q];
							c[q]=c[p]^c[q];
							c[p]=c[p]^c[q];
						}
						if(b[d[p]]<b[d[q]]){
							d[p]=d[p]^d[q];
							d[q]=d[p]^d[q];
							d[p]=d[p]^d[q];
						}
					}
			if((c[0]==d[0])&&(c[1]==d[1])&&(c[2]==d[2])){
				printf("%c%c%c\n",c[2]+65,c[1]+65,c[0]+65);
			}
			}
}

