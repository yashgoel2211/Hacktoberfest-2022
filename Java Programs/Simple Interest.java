public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        float i,p,n,r;
        System.out.print("Enter the Principle amount :");
        p = scan.nextInt();
        System.out.print("Enter the no. of years :");
        n = scan.nextFloat();
        System.out.print("Enter the Rate of Interest :");
        r = scan.nextFloat();
        i =p*n*r;
        System.out.println("Simple interest = "+i);
    }
}