#include <stdio.h>
int main() {
int amt, notes[] = {500,200,100,50,20,10,5,2,1}, i, count;
printf("Enter amount: ");
scanf("%d", &amt);
for(i=0; i<9; i++) {
count = amt / notes[i];
if(count) {
printf("%d note(s) of %d\n", count, notes[i]);
amt %= notes[i];
}
}
}

