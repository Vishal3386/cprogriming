
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sendOtpToMobile(int otp, const char* mobilenumber) {
    printf("Sending OTP %d \nmobilenumber %s\n", otp, mobilenumber);
}

void main() {
	int otp,ch;
	printf("enter how many digit otp will genret\n1==4\n2==6\n your choice:");
	scanf("%d",&ch);     
	
    if(ch==1)
     {
			
	srand(time(0));  
    otp = rand() % 9000+1000;  
    printf("Your OTP is: %d\n", otp);

    const char* mobilenumber = "7666759891";
    sendOtpToMobile(otp, mobilenumber);
       }
     if(ch==2){
	 
	 

	srand(time(0));  
    otp = rand() % 900000+100000;  
    printf("Your OTP is: %d\n", otp);

    const char* mobilenumber = "7666759891";
    sendOtpToMobile(otp, mobilenumber);



}
}





