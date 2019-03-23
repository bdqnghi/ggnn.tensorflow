package lab2_q9_a_radixsort;

public class Radixsort {
	public int[] a;
	public Radixsort(int[] arr){
		a=arr;
	}
	
	public void radixsort(){
		int max=a[0];
		for(int i=0;i<a.length;i++){
			if(max<a[i])
				max=a[i];
		}
		
		for(int exp=1;max/exp>0;exp*=10){
			counting(exp);
		}
		for(int i=0;i<a.length;i++){
			System.out.print(a[i]+" ");
		}
	}
	
	public void counting(int exp){
		int[] b=new int[a.length+1];
		int k=10;
		int[] c=new int[k+1];
		for(int i=0;i<k+1;i++){
			c[i]=0;
		}
		for(int i=0;i<a.length;i++){
			c[(a[i]/exp)%10]++;
		}
		
		for(int i=1;i<k+1;i++){
			c[i]=c[i]+c[i-1];
		}
		
		for(int i=a.length-1;i>=0;i--){
			//System.out.println("in for");
			b[c[(a[i]/exp)%10]]=a[i];
			c[(a[i]/exp)%10]--;
		}
		for(int i=0;i<a.length;i++){
			//System.out.print(b[i]+" ");
			a[i]=b[i+1];
		}
	}

}
