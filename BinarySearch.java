import java.util.Arrays;
public class BinarySearch{
	public static int rank(int[] array,int key){
		// array is sorted;
		int lo = 0;
		int hi = array.length - 1;
		while(lo <= hi){
			int mid = (lo + hi)/2;
			if(key < array[mid]){
				hi = mid - 1;	
			}else if(key > array[mid]){
				lo = mid + 1;
			}else return mid;		
		}
		return -1;
	}
	public static void main(String[] args){
		int N = Integer.parseInt(args[6]);
		int[] array = new int[N];
		for(int i = 0;i < N;i++){
			array[i] = Integer.parseInt(args[i]);
		}
		Arrays.sort(array);
		for(int i : array){
			System.out.println(i);
		}
		System.out.println(rank(array,7));
	}
}
