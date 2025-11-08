class DemoSelectionConstructs{
	public static void main1(String[] args){
		int num; 		// Variable Declaration 
		num=1;			// Assigning value
		//num=2;
		//num=3;
		if(num==1){
			System.out.println("ONE");
		}
		else if(num==2){
			System.out.println("TWO");
		}
		else if(num==3){
			System.out.println("THREE");
		}else{
			System.out.println("Incorrect Value");
		}
	}
	public static void main(String[] args){
		int num; 		// Variable Declaration 
		num=1;			// Assigning value
		//num=2;
		//num=3;
		switch(num){
			case 1:
				System.out.println("ONE");
				break;		 
			case 2:
				System.out.println("TWO");
				break;
			case 3:
				System.out.println("THREE");
				break;
			default:
				System.out.println("Incorrect Value");
				break;
		}
	}

}