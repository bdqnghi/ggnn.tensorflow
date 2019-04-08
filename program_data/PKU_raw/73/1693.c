int main(){
int a[5][5],b[5],c[5];
int q,w;
for(q=0;q<5;q++){
	for(w=0;w<5;w++){
	scanf("%d",&a[q][w]);
	}
	b[q]=a[q][0];
}
int e,r;
for(e=0;e<5;e++){
	for(r=0;r<5;r++){
		if(b[e]<=a[e][r]){b[e]=a[e][r];}
		else{b[e]=b[e];}
	}
}
int t,y,i=0;
for(t=0;t<5;t++){
	for(y=0;y<5;y++){
		if(a[t][y]==b[t]){c[t]=y;break;
		}
	}
}
int u,p,s=0;
for(u=0;u<5;u++){
	for(p=0;p<5;p++){
		if(b[u]<a[p][c[u]]){s+=1;}
		else{s+=0;}
	}
	if(s==4){printf("%d %d %d",u+1,c[u]+1,b[u]);i+=1;}
	else {i=i;}
	s=0;
}
if(i==0){printf("not found");}
return 0;
}