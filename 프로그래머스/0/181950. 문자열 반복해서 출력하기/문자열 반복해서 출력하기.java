import java.util.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int n = sc.nextInt();

        while(n > 0) {
            System.out.print(str);
            n--;
        }
    }
}