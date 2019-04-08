int main(){
	double c=0;
	int n,i,b=0;
	int x[10];
	int f[10];
       scanf("%d", &n);
          for(i=0;i<n;i++){
	   scanf("%d", &(x[i]));
}
		   for(i=0;i<n;i++){
	   scanf("%d", &(f[i]));
}
for(i=0;i<n;i++){
b+=(x[i]);
}

for(i=0;i<n;i++){
      if(89<f[i]&&f[i]<101) 
	   c+=4.0*(x[i]);
	else if(84<f[i]&&f[i]<90) 
	   c+=3.7*(x[i]);
	else if(81<f[i]&&f[i]<85) 
	   c+=3.3*(x[i]);
	 else if(77<f[i]&&f[i]<82) 
	 c+=3.0*(x[i]);
	else if(74<f[i]&&f[i]<78) 
	   c+=2.7*(x[i]);
	else if(71<f[i]&&f[i]<75) 
	   c+=2.3*(x[i]);
	else if(67<f[i]&&f[i]<72) 
	   c+=2.0*(x[i]);
	else if(63<f[i]&&f[i]<68) 
	   c+=1.5*(x[i]);
		else if(59<f[i]&&f[i]<64) 
	   c+=1.0*(x[i]);
        else 
	   c+=0*(x[i]);

}
   printf("%.2f",c/b);
   return 0;
}
