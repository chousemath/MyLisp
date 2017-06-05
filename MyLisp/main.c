// this is the header, allows us to use functions from stdio.h
#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int diff(int x, int y) {
    return x - y;
}

int prod(int x, int y) {
    return x * y;
}

// all c programs start from the main function
int main(int argc, const char * argv[]) {
    // insert code here...
    int count1;
    int count2 = 10;
    count2 += 10;
    count1 = 1;
    printf("Hello, World!\n");
    printf("Hello again world!\n");
    // puts is short for `put string`
    puts("Hey there world!");
    puts("Konichiwa world!");
    
    // testing the sum function
    if (sum(1, 2) == 3) {
        puts("Looks like the sum function works!");
    } else {
        puts("Your math needs more work");
    }
    
    // testing the diff function
    if (diff(33, 11) == 22) {
        puts("Looks like the difference function works!");
    } else {
        puts("Your subtraction needs more work...");
    }
    
    // testing the prod function
    if (prod(22, 10) == 220) {
        puts("Looks like the product function works fine!");
    } else {
        puts("Yikes...your multiplication skills need some work...");
    }
    
    // return value of 0 indicates no errors
    return 0;
}
