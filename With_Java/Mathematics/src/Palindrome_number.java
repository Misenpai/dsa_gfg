
public class Palindrome_number {
    static boolean isPal(int x) {
        int rev = 0;
        int temp = x;
        while (temp != 0) {
            int ld = temp % 10;
            System.out.println(ld);
            rev = rev * 10 + ld;
            System.out.println(rev);
            temp = temp / 10;
            System.out.println(temp);
        }
        return (rev == x);
    }

    public static void main(String[] args) {
        int x = -4554;
        System.out.println(isPal(x));
    }
}
