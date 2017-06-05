// this is the header, allows us to use functions from stdio.h
#include <stdio.h>

int sum(int x, int y) { return x + y; }
int diff(int x, int y) { return x - y; }
int prod(int x, int y) { return x * y; }
float sq_float(float x) { return x * x; }
void call_hello(int n) {
    for (int i = 0; i < n; i++) {
        puts("Hello world n");
    }
}

typedef struct {
    float x;
    float y;
} point;

typedef struct {
    float radius;
    float circumference;
    float area;
} circle;

// all c programs start from the main function
int main(int argc, const char * argv[]) {
    // insert code here...
    int count1;
    int count2 = 10;
    count2 += 10;
    count1 = 1;
    
    char* string1 = "This is a string?";
    char* string2 = "This should repeat 6 times";
    
    const int PI = 3.14f;
    
    point p1;
    p1.x = 100.0f;
    p1.y = 250.0f;
    
    circle c1;
    c1.radius = 12.0f;
    c1.circumference = 2 * PI * c1.radius;
    c1.area = PI * sq_float(c1.radius);
    
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
    if (prod(22, 10) == 220 && prod(10, 10) < 200) {
        puts("Looks like the product function works fine!");
    } else {
        puts("Yikes...your multiplication skills need some work...");
    }
    
    // testing arithmetic with the point struct
    if (sum(p1.x, p1.y) == 350.0f && sum(p1.x, p1.y) < 9000) {
        puts("Addition of the point's coordinates is as expected");
    } else {
        puts("Something went wrong with point addition");
    }
    
    puts(string1);
    
    int counter1 = 0;
    while (counter1 < 3) {
        puts(string2);
        counter1 += 1;
    }
    
    for (int i = 0; i < 3; i++) {
        puts(string2);
    }
    
    for (int i = 0; i < 5; i++) {
        puts("Hello world!");
    }
    
    int counter3 = 0;
    while (counter3 < 5) {
        puts("Hello again world...");
        counter3++;
    }
    
    call_hello(3);
    
    // return value of 0 indicates no errors
    return 0;
}
