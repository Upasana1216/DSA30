package infytq_advatange_round;

//Initial Template for Java
import java.io.*;
import java.util.*;

class SubsetSum {
	
	public static void main(String args[]) throws IOException {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- > 0) {
			int N = sc.nextInt();
			ArrayList<Integer> arr = new ArrayList<>();
			for (int i = 0; i < N; i++) {
				arr.add(sc.nextInt());
			}
			Solution ob = new Solution();

			ArrayList<Integer> ans = ob.subsetSums(arr, N);
			Collections.sort(ans);
			for (int sum : ans) {
				System.out.print(sum + " ");
			}
			System.out.println();
		}
	}
}

class Solution {
	ArrayList<Integer> sol(ArrayList<Integer> ans, ArrayList<Integer> arr, int n, int sum) {
		if (n == 0) {
			ans.add(sum);
			return ans;
		}
		sol(ans, arr, n - 1, sum + arr.get(n - 1));
		sol(ans, arr, n - 1, sum);
		return ans;
	}

	ArrayList<Integer> subsetSums(ArrayList<Integer> arr, int N) {
		ArrayList<Integer> ans = new ArrayList<>();
		return sol(ans, arr, N, 0);
	}
}