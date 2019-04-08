int main(){
int m,n,i,h=1,l=0,k,j,x[11],y[11],z[11],N;
	double s[50],p,d[50],t;
	scanf("%d",&n);
	N=(((n-1)*n)/2);     /*???N?*/
	for(i=0;i<n;i++){
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	}
	for(i=0;i<n;i++){
		for(k=i+1;k<n;k++){ /*???????????????*/		s[l]=sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k])+(z[i]-z[k])*(z[i]-z[k]));/*????sl*/
			l++;/*?????s[l]*/
			}
	}
	for(l=0;l<N;l++){/*??????sl????????*/
	   m=l;
      for(j=l+1;j<N;j++){
 		if (s[m]<s[j]){
	p=s[j];
 			s[j]=s[m];
 			s[m]=p;
 		}
 	 }
	}
	d[0]=s[0],j=1;/*????????j-1?????d[0]??*/
	for(l=1;l<N;l++){/*?????????sl???????????*/
		if(d[j-1]!=s[l]){
			d[j]=s[l];
			j++;
			h++;
			}
		}
    for (j=0;j<h;j++){/*??????d[j]??*/
       for(i=0;i<n;i++){
		  for(k=i+1;k<n;k++){  	t=sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k])+(z[i]-z[k])*(z[i]-z[k]));
			if(d[j]==t){/*??d[j]???x[i],x[k]??????*/		 printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[i],y[i],z[i],x[k],y[k],z[k],d[j]);           
			}
		   }
		   }
    }
    return 0;   
}
