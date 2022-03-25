package infytq_advatange_round;

import java.util.*;
import java.lang.Math;

class MinimumWidraws {
    static int l;

    static int fun(int s, int e, int k, int a[]) {
        if (k == 0) return 0;
        if (s > e || k < 0) return l;
        return Math.min(1 + fun(s + 1, e, k - a[s], a), 1 + fun(s, e - 1, k - a[e], a));
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n;

        n = sc.nextInt();
        int v[] = new int[n];

        for (int i = 0; i < n; i++) {
            v[i] = sc.nextInt();
        }

        l = (int) Math.pow(10, 9);
        int k;
        k = sc.nextInt();
        int kk = fun(0, n - 1, k, v);
        if (kk >= l) {
            System.out.println("-1");
        } else System.out.println(kk);

    }
}