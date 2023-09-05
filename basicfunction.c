#include <stdio.h>
void england(){
    printf("You are in England\n");
    return;
}
void australia(){
    printf("You are in Australia\n");
    england(); //calling england
}
void india(){
    printf("You are in India\n");
    australia(); // calling australia
    return 0;
}
int main(){
    india(); // calling india
    return 0;
}