package ch1;

import java.util.Scanner;

public class americano {

	public static void main(String[] args) {
		
	Scanner scanner= new Scanner(System.in);
	System.out.println("1.아메리카노,2.카푸치노,3.카페라떼,4.에스프레소 있습니다 어떤걸로 하시겠어요?");
	
	int meue = scanner.nextInt();
	
	switch(meue){
	case 1:
		System.out.println("2000원입니다.");
		break;
		
	case 2,3,4:
		System.out.println("3500원 입니다.");
		break;
	}
	
	scanner.close();

	}

}
