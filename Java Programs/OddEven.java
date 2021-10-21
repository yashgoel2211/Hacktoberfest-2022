public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number : ");
        int n = scan.nextInt();
        if (n%2==0)
        {
            System.out.println("Even");
        }
        else
        {
            System.out.println("Odd");
        }

    }
}