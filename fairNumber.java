import java.util.*;
public class fairNumber{
    static boolean fair(long n){
        long num = n;
        while(num!=0){
            long d = num%10;
            if(d!=0 && n%d!=0)  return false;  
            num/=10;
        }
        return true;
    }
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while(t-- >0){
            long n = scn.nextLong();
            while(!fair(n)){
                n++;
            }
            System.out.println(n);
        }
        scn.close();
    }
}