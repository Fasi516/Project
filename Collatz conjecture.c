#include<stdio.h>
//function prototypes
int collatz_seq(int n); 
int longest_seq(int limit);

int main (){
	
	//declaring variable to store limit
	int N;
	
	//taking value of limit from user
	printf("Enter a limit N: ");
	scanf("%d",&N);

	 
	int start_num;
	
	//calling func. to caculate num with longest sequence
	start_num=longest_seq(N);
	
	//printing the number with longest collataz sequence
	printf("Starting number with longest collatz sequence under %d is:%d\n",N,start_num);
	
	//printing length of longest sequence
	printf("Length of longest collatz sequence:%d\n",collatz_seq(start_num));
	
	return 0;

}

//calculating longest length of sequence
int collatz_seq(int n){
	
	int length=1;
	
	while(n!=1){
	
	//checking if the number is even 
		if(n%2==0){
		
		//diving number by 2
		n=n/2;
	
		}
	
		else{
	
		//implementing the condition if number is odd
		n = (n*3) + 1;
	
		}
		
		//incrementing length until loop exits 
		length++;
		
		
	}
	
	return length;

}

//function to calculate max number with longest collatz sequence
int longest_seq(int limit){
	
	int start_num = 0 ;
	
	int max_length = 0;
	
	//
	for(int i=2; i<limit; i++){
		
		int length = collatz_seq(i);
		
		if(length > max_length){
		
			max_length =length;
			
			start_num=i;
		
		}
	}
	
	return start_num ;
	
}
