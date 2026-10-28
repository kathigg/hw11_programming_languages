#include <iostream>
void move(int n, int start, int spare, int dest) {
if (n == 1)
cout << start <<" to " << dest << endl;
else {
move( n-1, start, dest, spare);
cout << start <<" to " << dest << endl;
move( n-1, spare, start, dest);
}
}
int main() {
move(4, 1, 2, 3); // will move 4 disks
return 0;
}
