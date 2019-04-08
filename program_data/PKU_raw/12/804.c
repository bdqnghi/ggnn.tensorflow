void main()
{
     int a[17],h,i,j,x=1,s;
     while(x)
     { 
       for(i=1;i<17;i++) {
       scanf("%d",&a[i]);
       if(a[i]==-1) goto end;
       if(a[i]==0) {h=i;break;}
       continue;}
      
      if(x)
      {s=0;
       for(i=1;i<h-1;i++)
        {for(j=i+1;j<h;j++)
         if(a[i]==2*a[j]||a[j]==2*a[i])
         s++;}
         }
       printf("%d\n",s);
       }
       end:
       return 0;
}
