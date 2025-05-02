import java.util.*;
public class johnyAncient {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while(t-- >0){
            long a = scn.nextLong();
            long b = scn.nextLong();
            if(a==b){
                System.out.println(0);
                continue;
            }
            if(a%2!=0 && b%2!=0){
                System.out.println(-1);
                continue;
            }
            int count = 0;
            int ans = 0;
            if(a>b){
                while(a%8==0 && a/8 >=b){
                    a/=8;
                    count++;
                }
                while(a%4==0 && a/4 >=b){
                    a/=4;
                    count++;
                }
                while(a%2==0 && a/2 >=b){
                    a/=2;
                    count++;
                }
                if(count==0 || a!=b)    ans = -1;
                else     ans = count;
            }
            else{
                while(a*8<=b){
                    a*=8;
                    count++;
                }
                while(a*4<=b){
                    a*=4;
                    count++;
                }
                while(a*2<=b){
                    a*=2;
                    count++;
                }
                if(count==0 || a!=b)    ans = -1;
                else    ans = count;
            }
            System.out.println(ans);
        }
        scn.close();
    }
}
