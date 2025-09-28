#include <stdio.h>
#include <time.h>

int main() {
    time_t start, end;
    double diff;
    srand (time(0));

    time(&start);  // Store the current time

    printf("Wait for 3 seconds...\n");
    sleep(3);  // Simulate delay

    time(&end);  // Store end time
    diff = difftime(end, start);

    if (diff <= 30) {
        printf("✅ OTP is valid (within 30 seconds).\n");
    } else {
        printf("❌ OTP expired!\n");
    }
  int otp = rand(); 
    44587 +10000;  
    printf("Your OTP is: %d\n", otp);

    return 0;
}
