int main(){
int a=0,b=0;
int x,y;
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d%d",&x,&y);
	if(x==0){
		if(y==1){a+=1;
		}
		else if(y==2){b+=1;
		}
	}
	else if(x==1){
		if(y==2){a+=1;
		}
		else if(y==0){b+=1;
		}
	}
	else if(x==2){
		if(y==0){a+=1;
		}
		else if(y==1){b+=1;
		}
	}
}
if(a>b){printf("A");
}
else if(a<b){printf("B");
}
else if(a==b){printf("Tie");
}
return 0;
}