#include <iostream>
using namespace std;

struct  Mountaineer{
    string name; //name of mountaineer
    int count; //number of ascents of the mountain
    int age;//age of mountaineer
void correctage(){
    if ((age < 5) && (age < 70))
        cout <<"age not suitable for climbing a mountain" << endl;

}
bool operator > (Mountaineer ch1) {
    return this->count > ch1.count;

}
bool operator < (Mountaineer ch1) {
    return this -> count < ch1.count;
}
};
void kik(Mountaineer n1, Mountaineer n2) {
    if (n1 > n2) cout << n1.name << " " << "he has more ascents, he is a real climber, not you" << " " << n2.name << endl;
else if (n1< n2 ) cout << n2.name <<" " << "he has more ascents, he is a real climber, not you" << " " << n1.name << endl;
}


int main() {
    Mountaineer n1 = Mountaineer{"first poser",4, 3};
    Mountaineer n2 = Mountaineer{"second poser", 1, 55};
    kik(n1,n2);
    n1.correctage();
    n2.correctage();
    return 0;
}