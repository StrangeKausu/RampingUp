import java.util.Scanner;
public class CalculatePowerofANumber
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int ans=1;
		
		System.out.print("Enter the Number : ");
		int num=sc.nextInt();
		System.out.print("Enter the Power of the Number : ");
		int pow=sc.nextInt();
		for(int i=0;i<pow;i++){
		    ans*=num;
		}
		System.out.println(num+"^"+pow+" = "+ ans);
	}
}
