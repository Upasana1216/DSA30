package hashing;

import java.util.*;
class LongestConsecutiveSeq {
    public static int longestConsecutive(int[] nums) {
        Set < Integer > hashSet = new HashSet < Integer > ();
        for (int num: nums) {
            hashSet.add(num);
        }

        int longestStreak = 0;

        for (int num: nums) {
            if (!hashSet.contains(num - 1)) {
                int currentNum = num;
                int currentStreak = 1;

                while (hashSet.contains(currentNum + 1)) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                longestStreak = Math.max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
    public static void main(String args[]) {
        int arr[]={100,200,1,2,3,4};
        int lon = longestConsecutive(arr);
        System.out.println("The longest consecutive sequence is " + lon);

    }
}
