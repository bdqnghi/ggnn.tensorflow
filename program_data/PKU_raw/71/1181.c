int main()
{
	int n, i, a[200], b[200], c[200], sum=0, d, e;
     scanf("%d", &n);
     for (sum=0,i=0; i<n; i++) {
	     scanf("%d%d%d", &a[i], &b[i], &c[i]);
		 if (b[i]>c[i]) {
			 d=c[i];
			 c[i]=b[i];
			 b[i]=d;
		 }
		 if (a[i]%4==0&&a[i]%100!=0||a[i]%400==0) {
			 for (sum=0,e=b[i]; e<c[i]; e++) {
				 switch(e){
					case 1:
				    case 3:
				    case 5:
			        case 7:
				    case 8:
				    case 10:
			    	case 12:
						sum+=31;
						break;
					case 2:
						sum+=29;
						break;

					case 4:
			     	case 6:
			    	case 9:
				    case 11:
				     	sum+=30;
					    break;
				}
			 }
				 if(sum%7==0) {
					 printf("YES\n");
				 }
					 else {
						 printf("NO\n");
					 }
			 
		 }
			 else  {

                   for (sum=0,e=b[i]; e<c[i]; e++) {
				 switch(e){
					case 1:
				    case 3:
				    case 5:
			        case 7:
				    case 8:
				    case 10:
			    	case 12:
						sum+=31;
						break;
					case 2:
						sum+=28;
						break;

					case 4:
			     	case 6:
			    	case 9:
				    case 11:
				     	sum+=30;
					    break;
				}
				   }
				 if(sum%7==0) {
					 printf("YES\n");
				 }
					 else {
						 printf("NO\n");
					 }
			 
			 }
	 }
	return 0;
}
