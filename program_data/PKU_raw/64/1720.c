int main()
{

  int x[10],X1[45],X2[45],xjl[45];
  int y[10],Y1[45],Y2[45],yjl[45];
  int z[10],Z1[45],Z2[45],zjl[45];
  int he[45];
  double juli[45];
 
  int n, i;
  scanf("%d", &n);
  for(i=0;i<n;i++){
	  scanf("%d%d%d",&(x[i]),&(y[i]),&(z[i]));
  }
  int m,f=0; 
 
  for(m=0 ; m < n-1 ; m++){
	for(i = m+1; i < n ; i++){
			xjl[f]=(x[m]-x[i])*(x[m]-x[i]);
			yjl[f]=(y[m]-y[i])*(y[m]-y[i]);
            zjl[f]=(z[m]-z[i])*(z[m]-z[i]);
			X1[f]=x[m];
			X2[f]=x[i];
			Y1[f]=y[m];
			Y2[f]=y[i];
			Z1[f]=z[m];
			Z2[f]=z[i];

			f++;
	}
  }
 
  for(m=0 ; m < f ; m++){
	he[m]=xjl[m]+yjl[m]+zjl[m];
  }
  for(m=0 ; m < f ; m++){
	  
	juli[m]=sqrt(he[m]);

  }
 

  double e;
  int h;
  for(m=1 ; m < f ; m++){
	for(i = 0; i < f - m; i++){
			if(juli[i] < juli[i+1]){
					e = juli[i+1];
					juli[i+1] = juli[i];
					juli[i] = e;
					h = X1[i+1];
					X1[i+1] = X1[i];
				    X1[i] = h;
					h = X2[i+1];
					X2[i+1] = X2[i];
					X2[i] = h;
					h = Y1[i+1];
					Y1[i+1] = Y1[i];
					Y1[i] = h;
					h = Y2[i+1];
					Y2[i+1] = Y2[i];
					Y2[i] = h;
					h = Z1[i+1];
					Z1[i+1] = Z1[i];
					Z1[i] = h;
					h = Z2[i+1];
					Z2[i+1] = Z2[i];
					Z2[i] = h;
				
			}
	}
  }

   
  for(m=0;m<f;m++){
  printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",X1[m],Y1[m],Z1[m],X2[m],Y2[m],Z2[m],juli[m]);
  }

  
  return 0;
}

