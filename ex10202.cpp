#include <stdio.h>
const char *numbers[100] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                   "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
//��λ����                  
const char *tens[100] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
//ʮλ���� 
void printTwoDigitNumber(int num) {
    if (num >= 10 && num <= 19) {
        printf("%s\n", numbers[num]);
        return;
    }//��Ϊ10~19û�й��ɣ�����Ҫ�����г� 
	int tens_place = num / 10;
	int ones_place = num % 10;

 
    switch(tens_place){
    	case 2: printf("%s-", tens[0]);break;
    	case 3: printf("%s-", tens[1]);break;
    	case 4: printf("%s-", tens[2]);break;
    	case 5: printf("%s-", tens[3]);break;
    	case 6: printf("%s-", tens[4]);break;
    	case 7: printf("%s-", tens[5]);break;
    	case 8: printf("%s-", tens[6]);break;
    	case 9: printf("%s-", tens[7]);break;
	}
	switch(ones_place){
		case 1: printf("%s\n", numbers[1]);break;
		case 2: printf("%s\n", numbers[2]);break;
		case 3: printf("%s\n", numbers[3]);break;
		case 4: printf("%s\n", numbers[4]);break;
		case 5: printf("%s\n", numbers[5]);break;
		case 6: printf("%s\n", numbers[6]);break;
		case 7: printf("%s\n", numbers[7]);break;
		case 8: printf("%s\n", numbers[8]);break;
		case 9: printf("%s\n", numbers[9]);break;
	}
	//��ĿҪ��ʮλ���λҪ�Զ̺������ 
}


int main() {
    int input_number;
    
    scanf("%d", &input_number);

   if (input_number >= 10 && input_number <= 99) {
        printTwoDigitNumber(input_number);
    } else {
        printf("error\n");
    }//ȷ���������Ϊ��λ�� 

    return 0;
}



