int sum(int a,int b,int c){
	int d=0,e;
	for(e=1;e<=c;e++){
		d=a+a+b+b-4*(2*e-1)+d;
	}
  return d;
}

int min(int a,int b,int c,int d){
	if(a<b)
	  b=a;
	if(b<c)
	  c=b;
	if(c<d)
	  d=c;

  return d;
}

int main(){
	int a[100][100],s[10000];
	int row,col,i,j,b,c,d,e;
	int f,g,h;
    scanf("%d%d",&row,&col);
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			scanf("%d",&a[i][j]);
			b=col-j;
			c=row-i;
			d=min(i-1,j-1,b,c);
			e=sum(row,col,d);
			f=i-d;
			g=j-d;
            if(f==1&&g>=1)
				h=e+g;
			else if(g==(col-2*d)&&f<=(row-2*d))
				h=e+f+g-1;
			else
				h=e+row+col-1-4*d+col-2*d-g+row-2*d-f;

			s[h]=a[i][j];
		}
	}

	for(i=1;i<=row*col;i++)
		printf("%d\n",s[i]);

return 0;
}
