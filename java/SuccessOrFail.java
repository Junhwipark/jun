package ch1;
import java.util.Scanner;
public class SuccessOrFail {

	public static void main(String[] args) {
	Scanner scanner= new Scanner(System.in);
	
	System.out.print("점수를 입력하세요:");
	int Score=scanner.nextInt();
	if(Score>=80)
		System.out.println("축하합니다! 합격");
	else
		System.out.println("불합격");
	scanner.close();

	}

}
