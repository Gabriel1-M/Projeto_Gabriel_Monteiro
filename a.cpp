#include <iostream>

using namespace std;

class A {
    private:
        int A1;
        float A2;

    public:
        int getA1() {
            return A1;
        }

        float getA2() {
            return A2;
        }

        void setA1(int a1) {
            A1 = a1;
        }

        void setA2(float a2) {
            A2 = a2;
        } 

        void MA1() {
            cout << "MA1";
        }

        void MA2() {
            cout << "MA2";
        }
};