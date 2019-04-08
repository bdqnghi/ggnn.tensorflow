int fa=0,fb=0;
int getnuma(char data[],int start)
{int i,j,k,l,n,m,tp=0;
 tp=data[start]-'0';start++;
 if ((data[start]==',')||(data[start]==0)) {fa=start+1;return tp;}
 else {tp=tp*10+data[start]-'0';start++;
		if ((data[start]==',')||(data[start]==0)) {fa=start+1;return tp;}
		else{tp=tp*10+data[start]-'0';start++;
				if ((data[start]==',')||(data[start]==0)) {fa=start+1;return tp;}
			}
		}
	 
}
int getnumb(char data[],int start)
{int i,j,k,l,n,m,tp=0;
 tp=data[start]-'0';start++;
 if ((data[start]==',')||(data[start]==0)) {fb=start+1;return tp;}
 else {tp=tp*10+data[start]-'0';start++;
		if ((data[start]==',')||(data[start]==0)) {fb=start+1;return tp;}
		else{tp=tp*10+data[start]-'0';start++;
				if ((data[start]==',')||(data[start]==0)) {fb=start+1;return tp;}
			}
		}
	 
}
int main()
{int i,j,k,l,n,m,people=1;
 char in[9000]={' '},out[9000]={' '};
 int time[2800]={0},max=0;
 scanf("%s%s",in,out);
 l=strlen(in);
 for (i=0;i<l;i++) if (in[i]==',') people++; 
 for (i=0;i<people;i++)
 {m=getnuma(in,fa);n=getnumb(out,fb);
  for (j=m;j<n;j++)
	  time[j]++;
 }
 for (i=1;i<1800;i++)
	 if (time[i]>max) max=time[i];
 printf("%d %d",people,max);
 return 7;
}
